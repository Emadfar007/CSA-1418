%option noyywrap

%{
#include <stdio.h>
%}

%%

"int"|"float"|"char"|"if"|"else"|"for"|"while"|"return"|"void"|"main"  { printf("Keyword    : %s\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]*                                                   { printf("Identifier : %s\n", yytext); }
[ \t\n]+                                                                  ;
.                                                                         ;

%%

int main()
{
    printf("Enter input:\n");
    yylex();
    return 0;
}
