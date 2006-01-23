/* $Header: /home/qiana/Repository/Logix/system/ndg/substitute.cp,v 1.2 2006/01/23 11:47:07 bill Exp $ */
-export([substitute/3, replace_reals/6]).
-language(compound).
-mode(trust).

procedure substitute(Subs, Cls, ClsOut).

substitute(Subs, Cls, ClsOut) :-
	Cls = {A,T,B} :
	ClsOut = {A1,T1,B1} |
%       screen#display({Subs,Cls,ClsOut},type(ground)),
	replace_subs(Subs,A,A1),
	replace_subs(Subs,T,T1),
	replace_subs(Subs,B,B1).


procedure replace_subs(Subs,Gs,GsOut).

replace_subs(Subs,Gs,GsOut) :-

    Subs ? S |
	rep_goals(S,Gs,Gs'),
	self;

    Subs = [] :
      GsOut = Gs .

procedure rep_goals(Rep, Goals, GoalsOut).

rep_goals(Rep, Goals, GoalsOut) :- 

    Goals ? Goal :
      GoalsOut ! GoalOut | 
        rep_goal(Rep, Goal, GoalOut), 
        self;

    Goals = [] : Rep = _,
      GoalsOut = [] .


procedure rep_goal(Rep, Goal, GoalOut).

rep_goal(Rep, Goal, GoalOut) :- 

    tuple(Goal),
    ArG := arity(Goal),
    make_tuple(ArG,Tuple) :
      GoalOut = Tuple |
        rep_goal1(Rep,ArG,Goal,GoalOut);

    string(Goal) : Rep = _,		% 
      GoalOut = Goal .


procedure rep_goal1(Rep, Ar, Goal, GoalOut).

rep_goal1(Rep, Ar, Goal, GoalOut) :-

    Ar-- > 1,
    arg(Ar,Goal,GoalAr),
    arg(Ar,GoalOut,GoalOutAr) |
        rep_term(Rep, GoalAr,GoalOutAr),
        self;

    Ar = 1,
    arg(1,Goal,Functor1),
    arg(1,GoalOut,Functor2) : Rep = _,
      Functor2 = Functor1 .


procedure rep_term(Rep, Term, TermOut).

rep_term(Rep, Term, TermOut) :-

    Term = list([Car|Cdr]) :
      TermOut = list([CarOut|CdrOut]) |
        rep_term(Rep, Car, CarOut),
        rep_term(Rep, Cdr, CdrOut);

    Term = tuple(Tuple),
    Ar := arity(Tuple),
    make_tuple(Ar,TupleOut) :
      TermOut = tuple(TupleOut) |
        rep_tuple(Rep, Ar, Tuple, TupleOut);

    Term = psi(_), Rep = {Term,Term1} :
      TermOut = Term1 ;

    Term = variable(_), Rep = {Term,Term1} :
      TermOut = Term1 ;

    Term = ro(X), Rep = {X,Term1}, Term1 = variable(_) : 
      TermOut = ro(Term1) ;

    Term = ro(X), Rep = {X,Term1}, Term1 = psi(_) : 
      TermOut = ro(Term1) ;

    Term = ro(X), Rep = {X,Term1},
    Term1 =\= variable(_), Term1 =\= psi(_) : 
      TermOut = Term1 ;

    Term = psi(_), Rep =\= {Term,_} :
      TermOut = Term ;

    Term = variable(_), Rep =\= {Term,_} :
      TermOut = Term ;

    Term = ro(X), Rep =\= {X,_} :
      TermOut = Term ;

    Term = integer(X) : Rep = _,
      TermOut = integer(X) ;

    Term = string(X) : Rep = _,
      TermOut = string(X) ;

    Term = real(X) : Rep = _,
      TermOut = real(X) ;

    Term = nil(X) : Rep = _,
      TermOut = nil(X) .


procedure rep_tuple(Rep, Ar, Tuple, TupleOut).

rep_tuple(Rep, Ar, Tuple, TupleOut) :-

    Ar-- > 0,
    arg(Ar,Tuple,ArTuple),
    arg(Ar,TupleOut,ArTupleOut) |
        rep_term(Rep,ArTuple,ArTupleOut),
        self;

    Ar = 0 : Rep = _, Tuple = _, TupleOut = _ .


replace_reals(AIn, TIn, BIn, AOut, TOut, BOut) :-

	stream#hash_table(Hash?),
	wrap_requests(AIn, AOut, Requests?, Hash),
	convert_reals(TIn, TOut, Requests, BRequests),
	convert_reals(BIn, BOut, BRequests, []).

wrap_requests(AIn, AOut, Requests, Hash) + (Index = 0) :-

    Requests ? {Real, Variable} :
      Hash ! lookup(Real, NewValue, OldValue, Reply),
      Variable = `ndg_real(NewValue?) |
	insert_converts(Real, Reply, OldValue, NewValue,
			Index, Index', AOut, AOut'),
	self;

    Requests =?= [] :
      Index = _,
      Hash = [],
      AOut = AIn.

insert_converts(Real, Reply, OldValue, NewValue,
		Index, NewIndex, AOut, NewAOut) :-

    Reply = old :
      Real = _,
      AOut = NewAOut,
      Index = NewIndex,
      OldValue = NewValue;

    Reply = new,
    Index++,
    convert_to_string(Real, String) :
      OldValue = _,
      AOut = [convert_to_real(String, `(ndg_real(Index))) | NewAOut],
      NewIndex = Index',
      NewValue = Index.


convert_reals(TIn, TOut, Requests, NewRequests) :-

    TIn ? Tell :
      TOut ! Tell' |
	convert_reals(Tell, Tell', Requests, Requests'),
	convert_reals;

    tuple(TIn),
    Arity := arity(TIn),
    make_tuple(Arity, TIn') :
      TIn' = TOut |
	replace_tuple(TIn, TOut, Requests, NewRequests, Arity);

    real(TIn) :
      Requests ! {TIn, Variable},
      Requests' = NewRequests,
      TOut = Variable? ;

    otherwise :
      TIn = TOut,
      Requests = NewRequests.


replace_tuple(TIn, TOut, Requests, NewRequests, Arity) :-

    Arity-- > 0,
    arg(Arity, TIn, Argument),
    arg(Arity, TOut, NewArgument) |
	convert_reals(Argument, NewArgument, NewRequests', NewRequests),
	self;

    Arity =< 0 :
      TIn = _,
      TOut = _,
      Requests = NewRequests.
