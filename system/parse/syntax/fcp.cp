/* $Header: /home/qiana/Repository/Logix/system/parse/syntax/fcp.cp,v 1.2 1999/11/28 12:41:47 bill Exp $ */
-language(syntax).

yfx( ';'  , 1070).	% 18/6/89	1050
yfx( '|'  , 1060).	% 18/6/89	1100
yfy( ':'  , 1050).	% 18/6/89	1060
yfx( '&'  , 1000).      % 16/11/99      new
yfx( ','  , 1000).
yfx( '!'  ,  900).	% 1/1/88	new
xfy( '?'  ,  900).	% 4/5/88	new
yfy( '='  ,  800).	% 1/1/88	700
xfy( '@'  ,  720).
yfx( '#'  ,  710).
yfy( '<'  ,  700).
yfy( '>'  ,  700).
xfy( '+'  ,  500).
xfy( '-'  ,  500).
xfy( '*'  ,  400).
xfy( '/'  ,  400).
yfy( '\'  ,  300).
yfy( ':-' , 1200).
yfy( '<-' , 1190).	% 18/6/89	new
yfy( '=>' , 1010).	% 15/12/91	new
yfy( '@<' ,  800).	% 1/1/88	700
yfy( ':=' ,  700).
yfy( '+=' ,  700).	% 27/4/91	new
yfy( '-=' ,  700).	% 27/4/91	new
yfy( '==' ,  700).
yfy( '#<' ,  700).
yfy( '\=' ,  700).
yfy( '=<' ,  700).
yfy( '>=' ,  700).
xfy( '\/' ,  250).
xfy( '/\' ,  240).
yfy( '::=', 1200).	% 1/1/88	new
yfy( '<=>', 1010).	% 15/12/91	new
yfy( '=?=',  800).	% 1/1/88	700
yfy( '=\=',  800).	% 1/1/88	700
yfy( '=:=',  700).
xfy(  div ,  400).
yfy(  mod ,  300).
fx(  '#'  ,  710).
fy(  '+'  ,  220).
fy(  '-'  ,  220).
fy(  '~'  ,  220).
fx(  '`'  ,  210).
fy(  '?'  ,  210).
yf(  '^'  ,  205).	% 27/4/91	200
yf(  '??' ,  200).	% 22/5/91	new
yf(  '++' ,  200).	% 27/4/91	new
yf(  '--' ,  200).	% 27/4/91	new
fx( 'procedure', 100).	% 1/1/88	new
xf(  '!'  ,  100).	% 20/10/91	changed from 900
