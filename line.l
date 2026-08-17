%option noyywrap

%{
#include stdio.h
int line = 1;
%}

%%

n      { printf(n); line++; }
.      { printf(%dt%s, line, yytext); }

%%

int main()
{
    yyin = fopen(sample.c, r);

    if (yyin == NULL)
    {
        printf(File not found!n);
        return 1;
    }

    yylex();
    fclose(yyin);

    return 0;
}