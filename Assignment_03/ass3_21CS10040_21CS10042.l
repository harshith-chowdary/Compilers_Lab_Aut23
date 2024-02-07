    //  Maddi Nihith - 21CS10040
    //  Meduri Harshith Chowdary - 21CS10042

%{
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
%}

%x STATE_MULTI_LINE_COMMENT
%x STATE_SINGLE_LINE_COMMENT

KEYWORD                 "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
ESCAPE_SEQUENCE         "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
PUNCTUATOR              "["|"++"|"/"|"?"|"="|","|"]"|"("|"{"|"}"|"."|"->"|"*"|"+"|"-"|"~"|"!"|"%"|"<<"|">>"|"<"|">"|"<="|">="|":"|";"|"..."|"*="|"/="|"%="|"+="|"-="|"<<="|"#"|"--"|")"|"&"|"=="|"^"|"|"|"&&"|">>="|"!="|"&="|"^="|"||"|"|"

IDENTIFIER              [A-Za-z_][A-Za-z0-9_]*

DIGIT                   [0-9]
DIGIT_SEQUENCE          {DIGIT}+
NONZERO_DIGIT           [1-9]
INTEGER_CONSTANT        {NONZERO_DIGIT}{DIGIT}*|"0"

EXPONENT_PART           [eE]([+-]?){DIGIT_SEQUENCE}
FRACTIONAL_CONSTANT     {DIGIT_SEQUENCE}?\.{DIGIT_SEQUENCE}|{DIGIT_SEQUENCE}\.
FLOATING_CONSTANT       {FRACTIONAL_CONSTANT}({EXPONENT_PART}?)|{DIGIT_SEQUENCE}{EXPONENT_PART}

ENUMERATION_CONSTANT    {IDENTIFIER}

C_CHAR                  [^\'\n\\]|{ESCAPE_SEQUENCE}
C_CHAR_SEQUENCE         {C_CHAR}+
CHARACTER_CONSTANT      \'{C_CHAR_SEQUENCE}\'

S_CHAR                  [^\"\n\\]|{ESCAPE_SEQUENCE}
S_CHAR_SEQUENCE         {S_CHAR}+
STRING_LITERAL          \"({S_CHAR_SEQUENCE}?)\"

WHITESPACE              [ \n\t]

%%

{KEYWORD}                       { return KEYWORD; }
{IDENTIFIER}                    { return IDENTIFIER; }
{INTEGER_CONSTANT}              { return INTEGER_CONSTANT; }
{FLOATING_CONSTANT}             { return FLOATING_CONSTANT; }
{CHARACTER_CONSTANT}            { return CHARACTER_CONSTANT; }
{STRING_LITERAL}                { return STRING_LITERAL; }
{PUNCTUATOR}                    { return PUNCTUATOR; }

"/*"                            { BEGIN(STATE_MULTI_LINE_COMMENT); }
<STATE_MULTI_LINE_COMMENT>"*/"   { BEGIN(INITIAL); return MULTI_LINE_COMMENT; }
<STATE_MULTI_LINE_COMMENT>.      { }
<STATE_MULTI_LINE_COMMENT>"\n"   { }

"//"                            { BEGIN(STATE_SINGLE_LINE_COMMENT); }
<STATE_SINGLE_LINE_COMMENT>"\n"  { BEGIN(INITIAL); return SINGLE_LINE_COMMENT; }
<STATE_SINGLE_LINE_COMMENT>.     { }

{WHITESPACE}                    { }
.                               { return INVALID_TOKEN; }

%%

int yywrap(void){
    return 1;
}