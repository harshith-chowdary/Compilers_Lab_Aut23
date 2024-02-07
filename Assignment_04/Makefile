ass4_21CS10042_21CS10040_output.txt: parser ass4_21CS10042_21CS10040_test.c
	./parser < ass4_21CS10042_21CS10040_test.c > ass4_21CS10042_21CS10040_output.txt

parser: lex.yy.o y.tab.o ass4_21CS10042_21CS10040_main.o
	gcc lex.yy.o y.tab.o ass4_21CS10042_21CS10040_main.o -lfl -o parser

ass4_21CS10042_21CS10040_main.o: ass4_21CS10042_21CS10040_main.c
	gcc -c ass4_21CS10042_21CS10040_main.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: ass4_21CS10042_21CS10040.l y.tab.h
	flex ass4_21CS10042_21CS10040.l

y.tab.c y.tab.h: ass4_21CS10042_21CS10040.y
	bison -dty --report=all ass4_21CS10042_21CS10040.y

clean:
	rm parser ass4_21CS10042_21CS10040_main.o lex.yy.* y.tab.* y.output
