#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a line: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] == '/' && str[1] == '/')
        printf("Single-line Comment\n");
    else if (str[0] == '/' && str[1] == '*' &&
             strstr(str, "*/") != NULL)
        printf("Multi-line Comment\n");
    else
        printf("Not a Comment\n");

    return 0;
}
