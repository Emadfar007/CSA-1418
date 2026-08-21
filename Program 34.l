%option noyywrap

%{
#include <stdio.h>
%}

%%

[0-9][0-9]\/[0-9][0-9]\/[0-9][0-9][0-9][0-9]    { printf("Valid DOB\n"); }
.*    { printf("Invalid DOB\n"); }

%%

int main()
{
    printf("Enter DOB (DD/MM/YYYY): ");
    yylex();
    return 0;
}
