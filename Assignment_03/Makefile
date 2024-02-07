main : lexer ass3_21CS10040_21CS10042_Test.c 
	./lexer < ass3_21CS10040_21CS10042_Test.c

lexer : lex.yy.c 
	gcc lex.yy.c ass3_21CS10040_21CS10042.c -o lexer

lex.yy.c : ass3_21CS10040_21CS10042.l
	lex ass3_21CS10040_21CS10042.l

clean:
	rm lex.yy.c lexer