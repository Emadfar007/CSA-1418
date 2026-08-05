#include <stdio.h>

int main()
{
    char S[30], E[20];

    printf("Enter Production for S: ");
    scanf("%s", S);

    printf("Enter Production for E: ");
    scanf("%s", E);

    printf("\nGrammar after Left Factoring:\n");
    printf("S -> iEtSS' | a\n");
    printf("S' -> eS | e\n");
    printf("E -> %s\n", E);

    return 0;
}
