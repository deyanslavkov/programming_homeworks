all: robot.out

robot.out: robot.c bitstate.o
	gcc robot.c bitstate.o -o robot.out

bitstate.o: bitstate.c bitstate.h
	gcc -c bitstate.c -o bitstate.o

clean:
	rm -rf *.o *.out