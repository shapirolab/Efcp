# fcp make
SHELL = /bin/sh
GCC = gcc -m32
CFLAGS = -c -DULTRIX -DLINUX

INCLUDES = -I.

BASICH = fcp.h codes.h global.h macros.h
OFILES = cnv.o concatenate.o ctl.o dist.o emulate.o externs.o fcp.o \
	 file.o freeze_term.o freezer.o global.o heap.o interface.o \
	 kernels.o link_static.o logix.o math.o notify.o spicomm.o \
	 spiweight.o streams.o timer.o tty.o unify.o utility.o


LIBS   = -l m -l c

fcp: \
	$(OFILES)
	$(GCC) $(OFILES) $(LIBS) -o fcp

cnv.o: \
	$(BASICH) emulate.h opcodes.h cnv.c 
	$(GCC) $(CFLAGS) $(LOWOPT) $(INCLUDES) cnv.c
concatenate.o: \
	$(BASICH) concatenate.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) concatenate.c
ctl.o: \
	$(BASICH) ctl.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) ctl.c
dist.o: \
	$(BASICH) dist.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) dist.c
emulate.o : \
	$(BASICH) opcodes.h emulate.h emulate.c
	$(GCC) $(CFLAGS) $(LOWOPT) $(INCLUDES) emulate.c
externs.o : \
	$(BASICH) opcodes.h externs.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) externs.c
fcp.o : \
	$(BASICH) emulate.h fcp.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) fcp.c
file.o: \
	$(BASICH) file.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) file.c
freeze_term.o: \
	$(BASICH) freeze_term.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) freeze_term.c
freezer.o : \
	$(BASICH) emulate.h freezer.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) freezer.c
global.o : \
	$(BASICH) emulate.h global.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) global.c
heap.o : \
	$(BASICH) emulate.h heap.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) heap.c
interface.o: \
	$(BASICH) interface.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) interface.c
kernels.o : \
	$(BASICH) emulate.h kernels.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) kernels.c
link_static.o: \
	$(BASICH) link_static.h link_static.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) link_static.c
logix.o : \
	$(BASICH) emulate.h logix.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) logix.c
math.o: \
	$(BASICH) math.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) math.c
notify.o : \
	$(BASICH) notify.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) notify.c
spicomm.o: \
	$(BASICH) spicomm.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) spicomm.c
spiweight.o: \
	$(BASICH) spiweight.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) spiweight.c
streams.o : \
	$(BASICH) emulate.h streams.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) streams.c
timer.o: \
	$(BASICH) timer.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) timer.c
tty.o: \
	$(BASICH) tty.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) tty.c
unify.o : \
	$(BASICH) emulate.h unify.h unify.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) unify.c
utility.o : \
	$(BASICH) utility.c
	$(GCC) $(CFLAGS) $(OPT) $(INCLUDES) utility.c

