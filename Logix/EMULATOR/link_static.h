#define	NUM_FUNCTIONS	9

extern int
	concatenate(),
	ctl(),
	file(),
	freeze_term(),
	interface(),
	math(),
	timer(),
	tty(),
	spicomm();

static char *FuncName[NUM_FUNCTIONS] = {
	"concatenate.o",
	"ctl.o",
	"file.o",
	"freeze_term.o",
	"interface.o",
	"math.o",
	"timer.o",
	"tty.o",
	"spicomm.o"};

static int (*Func[NUM_FUNCTIONS])() = {
	concatenate,
	ctl,
	file,
	freeze_term,
	interface,
	math,
	timer,
	tty,
	spicomm};
