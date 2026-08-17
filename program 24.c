#include <stdio.h>

int main()
{
    FILE *in, *out;
    char c, next;
    int comments = 0;

    in = fopen("input.c", "r");
    out = fopen("output.c", "w");

    if (in == NULL || out == NULL)
    {
        printf("File error!");
        return 1;
    }

    while ((c = fgetc(in)) != EOF)
    {
        if (c == '/')
        {
            next = fgetc(in);

            if (next == '/')
            {
                comments++;
                while ((c = fgetc(in)) != '\n' && c != EOF);
                if (c == '\n')
                    fputc('\n', out);
            }
            else if (next == '*')
            {
                comments++;
                while ((c = fgetc(in)) != EOF)
                {
                    if (c == '*' && (next = fgetc(in)) == '/')
                        break;
                }
            }
            else
            {
                fputc(c, out);
                if (next != EOF)
                    fputc(next, out);
            }
        }
        else
            fputc(c, out);
    }

    fclose(in);
    fclose(out);

    printf("Number of comments = %d\n", comments);
    printf("Comments removed successfully.\n");

    return 0;
}
