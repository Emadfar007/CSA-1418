#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if(isalpha(ch) &&
           ch != 'a' && ch != 'e' && ch != 'i' &&
           ch != 'o' && ch != 'u')
            count++;
    }

    printf("Number of consonants = %d\n", count);

    return 0;
}
