CC=g++
CFLAGS=-I.
DEPS = csc160.h
OBJ = csc160.o hw6.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hw6: $(OBJ)
	$(CC) -o $@ csc160.o hw6.o $(CFLAGS)

all: hw6

clean:
	rm -f *.o hw6
