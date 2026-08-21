%option noyywrap

%{
#include <stdio.h>
int positive = 0, negative = 0;
%}

%%

"+"?[0-9]+    { printf("Positive: %s\n", yytext); positive++; }
"-"[0-9]+     { printf("Negative: %s\n", yytext); negative++; }
[ \t\n]+      ;
.             ;

%%

int main()
{
    printf("Enter numbers:\n");
    yylex();

    printf("\nPositive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);

    return 0;
}
