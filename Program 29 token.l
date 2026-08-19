%option noyywrap

%{
#include <stdio.h>
%}

%%

"int"|"void"|"return"|"printf"    { printf("Keyword    : %s\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]*            { printf("Identifier : %s\n", yytext); }
[0-9]+                             { printf("Constant   : %s\n", yytext); }
[+\-*/=]                           { printf("Operator   : %s\n", yytext); }
[(){};,]                            { printf("Special    : %s\n", yytext); }
[ \t\n]+                           ;
.                                  { printf("Unknown    : %s\n", yytext); }

%%

int main()
{
    yyin = fopen("sample.c", "r");

    if (yyin == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    yylex();
    fclose(yyin);

    return 0;
}
