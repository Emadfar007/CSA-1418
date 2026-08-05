#include <stdio.h>

int main()
{
    char S[20], L[20];

    printf("Enter Production for S: ");
    scanf("%s", S);

    printf("Enter Production for L: ");
    scanf("%s", L);

    printf("\nGrammar after eliminating Left Recursion:\n");
    printf("S -> %s\n", S);
    printf("L -> SL'\n");
    printf("L' -> ,SL' | e\n");

    return 0;
}
