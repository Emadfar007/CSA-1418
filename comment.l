%option noyywrap

%{
#include <stdio.h>
int comments = 0;
FILE *out;
%}

%%

"//".*                  { comments++; }
"/*"([^*]|\*+[^*/])*\*+"/"  { comments++; }
\n                      { fputc('\n', out); }
.                       { fputc(yytext[0], out); }

%%

int main()
{
    yyin = fopen("input.c", "r");
    out = fopen("output.c", "w");

    if (yyin == NULL || out == NULL)
    {
        printf("File error!\n");
        return 1;
    }

    yylex();

    fclose(yyin);
    fclose(out);

    printf("Number of comments = %d\n", comments);
    printf("Comments removed and written to output.c\n");

    return 0;
}