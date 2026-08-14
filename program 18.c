#include <stdio.h>
#include <string.h>

int main()
{
    char E[20] = "+*id)", T[20] = "*id)", F[20] = ")id";
    
    printf("Grammar:\n");
    printf("E -> E+T | T\n");
    printf("T -> T*F | F\n");
    printf("F -> (E) | id\n\n");

    printf("TRAILING(E) = { +, *, ), id }\n");
    printf("TRAILING(T) = { *, ), id }\n");
    printf("TRAILING(F) = { ), id }\n");

    return 0;
}
