ass2: main.o libass2_21CS10042.a
	cc main.o -L. -lass2_21CS10042 -o ass2.exe

main.o: main.c myl.h
	cc -Wall -c main.c

libass2_21CS10042.a: ass2_21CS10042.o
	ar -rcs libass2_21CS10042.a ass2_21CS10042.o

ass2_21CS10042.o: ass2_21CS10042.c myl.h
	cc -Wall -c ass2_21CS10042.c

clean:
	rm -f ass2.exe main.o libass2_21CS10042.a ass2_21CS10042.o