
COMPILER      = -cc
OPTIONS       = -std=c99 -pedantic -Wall -o
OPTIONS_LIBS  = -std=c99 -pedantic -Wall -c


all: hashfunc.o hashtest

hashfunc.o: hashfunc.c hashfunc.h
	$(COMPILER) $(OPTIONS_LIBS) hashfunc.c

hashtest: hashfunc.c hashtest.c
	$(COMPILER) $(OPTIONS) hashtest hashtest.c hashfunc.o

clean:
	rm -f core *.o *.bak *stackdump *#

