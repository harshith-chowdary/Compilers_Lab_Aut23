parser: lex.yy.o y.tab.o ass5_21CS10042_21CS10040_translator.o
	g++ lex.yy.o y.tab.o ass5_21CS10042_21CS10040_translator.o -lfl -o parser

ass5_21CS10042_21CS10040_translator.o: ass5_21CS10042_21CS10040_translator.cxx ass5_21CS10042_21CS10040_translator.h
	g++ -c ass5_21CS10042_21CS10040_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c
	# g++ -c -D_DEBUG_H y.tab.c

lex.yy.c: ass5_21CS10042_21CS10040.l y.tab.h ass5_21CS10042_21CS10040_translator.h
	flex ass5_21CS10042_21CS10040.l

y.tab.c y.tab.h: ass5_21CS10042_21CS10040.y
	bison -dty --report=all ass5_21CS10042_21CS10040.y

clean:
	rm -rf parser ass5_21CS10042_21CS10040_translator.o lex.yy.* y.tab.* y.output

clean_output:
	rm -rf ass5_21CS10042_21CS10040_quads1.out ass5_21CS10042_21CS10040_quads2.out ass5_21CS10042_21CS10040_quads3.out ass5_21CS10042_21CS10040_quads4.out ass5_21CS10042_21CS10040_quads5.out ass5_21CS10042_21CS10040_quads6.out ass5_21CS10042_21CS10040_quads7.out

test: parser
	@echo "Running test 1 (Arithmetic, shift, and bit expressions)"
	./parser < ass5_21CS10042_21CS10040_test1.c > ass5_21CS10042_21CS10040_quads1.out
	@echo "Test 1 complete\n"

	@echo "Running test 2 (Unary expressions and operators)"
	./parser < ass5_21CS10042_21CS10040_test2.c > ass5_21CS10042_21CS10040_quads2.out
	@echo "Test 2 complete\n"

	@echo "Running test 3 (Relational and boolean operators with if-else blocks)"
	./parser < ass5_21CS10042_21CS10040_test3.c > ass5_21CS10042_21CS10040_quads3.out
	@echo "Test 3 complete\n"

	@echo "Running test 4 (Arrays and pointers)"
	./parser < ass5_21CS10042_21CS10040_test4.c > ass5_21CS10042_21CS10040_quads4.out
	@echo "Test 4 complete\n"

	@echo "Running test 5 (Declarations and assignments)"
	./parser < ass5_21CS10042_21CS10040_test5.c > ass5_21CS10042_21CS10040_quads5.out
	@echo "Test 5 complete\n"

	@echo "Running test 6 (Loops)"
	./parser < ass5_21CS10042_21CS10040_test6.c > ass5_21CS10042_21CS10040_quads6.out
	@echo "Test 6 complete\n"

	@echo "Running test 7 (Function calls)"
	./parser < ass5_21CS10042_21CS10040_test7.c > ass5_21CS10042_21CS10040_quads7.out
	@echo "Test 7 complete\n"