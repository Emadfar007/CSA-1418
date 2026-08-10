#include <stdio.h>
#include <string.h>

struct symbol
{
    char name[20];
    char type[20];
} s[20];

int main()
{
    int n, i, ch, found;
    char key[20];

    printf("Enter number of symbols: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Symbol Name: ");
        scanf("%s", s[i].name);

        printf("Enter Data Type: ");
        scanf("%s", s[i].type);
    }

    do
    {
        printf("\n\n1.Display\n2.Search\n3.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nSymbol Table\n");
                printf("-------------------------\n");
                printf("Symbol\t\tType\n");
                printf("-------------------------\n");

                for(i = 0; i < n; i++)
                    printf("%s\t\t%s\n", s[i].name, s[i].type);
                break;

            case 2:
                found = 0;
                printf("Enter Symbol to Search: ");
                scanf("%s", key);

                for(i = 0; i < n; i++)
                {
                    if(strcmp(key, s[i].name) == 0)
                    {
                        printf("Symbol Found\n");
                        printf("Name : %s\n", s[i].name);
                        printf("Type : %s\n", s[i].type);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Symbol Not Found\n");
                break;

            case 3:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(ch != 3);

    return 0;
}
