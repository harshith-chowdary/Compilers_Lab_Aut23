/*
    Maddi Nihith - 21CS10040
    Meduri Harshith Chowdary - 21CS10042
*/

#include <stdio.h>

#define KEYWORD                 100
#define IDENTIFIER              101
#define INTEGER_CONSTANT        102
#define FLOATING_CONSTANT       103
#define ENUMERATION_CONSTANT    104
#define CHARACTER_CONSTANT      105
#define STRING_LITERAL          106
#define PUNCTUATOR              107
#define MULTI_LINE_COMMENT      108
#define SINGLE_LINE_COMMENT     109
#define INVALID_TOKEN           110

extern int yylex();
extern char* yytext;

int main() {
    int token;
    while(token = yylex()) {
        switch(token) {
            case KEYWORD: 
                printf("<KEYWORD, %d, %s>\n", token, yytext); 
                break;
            case IDENTIFIER: 
                printf("<IDENTIFIER, %d, %s>\n", token, yytext); 
                break;
            case INTEGER_CONSTANT: 
                printf("<INTEGER_CONSTANT, %d, %s>\n", token, yytext); 
                break;
            case FLOATING_CONSTANT: 
                printf("<FLOAT_CONSTANT, %d, %s>\n", token, yytext); 
                break;
            case CHARACTER_CONSTANT: 
                printf("<CHARACTER_CONSTANT, %d, %s>\n", token, yytext); 
                break;
            case STRING_LITERAL: 
                printf("<STRING_LITERAL, %d, %s>\n", token, yytext); 
                break;
            case PUNCTUATOR: 
                printf("<PUNCTUATOR, %d, %s>\n", token, yytext); 
                break;
            case MULTI_LINE_COMMENT: 
                printf("<MULTI_LINE_COMMENT, %d, %s>\n", token, yytext);  
                break;
            case SINGLE_LINE_COMMENT: 
                printf("<SINGLE_LINE_COMMENT, %d, %s>\n", token, yytext); 
                break;
            default:
                printf("<INVALID_TOKEN, %d, %s>\n", token, yytext);
                break;
        }
    }
    return 0;
}