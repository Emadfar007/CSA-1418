#include <stdio.h>

int main() {
    FILE *fp;
    char ch, next;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {

        // Ignore spaces, tabs, new lines
        if (ch == ' ' || ch == '\t' || ch == '\n')
            continue;

        // Ignore comments
        if (ch == '/') {
            next = fgetc(fp);

            // Single-line comment
            if (next == '/') {
                while ((ch = fgetc(fp)) != '\n' && ch != EOF);
            }
            // Multi-line comment
            else if (next == '*') {
                while ((ch = fgetc(fp)) != EOF) {
                    if (ch == '*') {
                        if ((ch = fgetc(fp)) == '/')
                            break;
                    }
                }
            }
            else {
                printf("%c", ch);
                fseek(fp, -1, SEEK_CUR);
            }
        }
        else {
            printf("%c", ch);
        }
    }

    fclose(fp);
    return 0;
}
