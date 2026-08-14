#include <stdio.h>
#include <string.h>

int main()
{
    char E[10] = "", T[10] = "", F[10] = "";
    int i;

    /* F -> (E) | id */
    strcat(F, "( ");
    strcat(F, "id");

    /* T -> T*F | F */
    strcpy(T, F);

    /* E -> E+T | T */
    strcpy(E, T);

    printf("Grammar:\n");
    printf("E -> E+T | T\n");
    printf("T -> T*F | F\n");
    printf("F -> (E) | id\n\n");

    printf("LEADING(E) = { ");
    for(i = 0; E[i] != '\0'; i++)
        printf("%c", E[i]);
    printf(" }\n");

    printf("LEADING(T) = { ");
    for(i = 0; T[i] != '\0'; i++)
        printf("%c", T[i]);
    printf(" }\n");

    printf("LEADING(F) = { ");
    for(i = 0; F[i] != '\0'; i++)
        printf("%c", F[i]);
    printf(" }\n");

    return 0;
}
