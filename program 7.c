#include <stdio.h>

int main()
{
    char S[20], A[20], B[20];

    printf("Enter Production for S: ");
    scanf("%s", S);

    printf("Enter Production for A: ");
    scanf("%s", A);

    printf("Enter Production for B: ");
    scanf("%s", B);

    printf("\nGrammar:\n");
    printf("S -> %s\n", S);
    printf("A -> %s\n", A);
    printf("B -> %s\n", B);

    printf("\nFIRST Sets are:\n");
    printf("FIRST(A) = { e }\n");
    printf("FIRST(B) = { e }\n");
    printf("FIRST(S) = { a, b }\n");

    return 0;
}
