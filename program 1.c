#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch))
            continue;               // Ignore spaces, tabs, new lines

        if (isalpha(ch))
            printf("%c : Identifier\n", ch);

        else if (isdigit(ch))
            printf("%c : Constant\n", ch);

        else if (ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='=')
            printf("%c : Operator\n", ch);
    }

    fclose(fp);
    return 0;
}
