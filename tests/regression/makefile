FILES := $(wildcard *.c) $(wildcard *.cpp) $(wildcard *.asm)
EXCLUDE :=
DEPENDENCIES := $(filter-out $(EXCLUDE), $(FILES))
TESTS := $(DEPENDENCIES:.cpp=.tst)
TESTS := $(TESTS:.c=.tst)
TESTS := $(TESTS:.asm=.tst)

all: $(TESTS)

%.o: %.c
	occ /1 /c /! $<

%.o: %.cpp
	occ /c /! $<

%.o: %.asm
	oasm $<
	
%.exe: %.o
	occ $<
	
mpfrdll.dll: mpfr.c
	occ /Wd /ompfrdll.dll /DDLL mpfr.c
	oimplib -C mpfrdll.l mpfrdll.dll

mpfr.exe: mpfrdll.dll mpfr.c
	occ /ompfr.exe mpfr.c -l mpfrdll.l

%.tst: %.exe
	$< > $*.out
	fc /b $*.cmpx $*.out

clean:
	$(CLEAN)

