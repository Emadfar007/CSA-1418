#include <stdio.h>
#include <ctype.h>

char opstack[50];
int top = -1, temp = 1;

int priority(char op)
{
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

void generate(char op)
{
    char b = opstack[top--];
    char a = opstack[top--];

    printf("t%d = %c %c %c\n", temp, a, op, b);

    opstack[++top] = '0' + temp;
    temp++;
}

int main()
{
    char exp[50], operators[50];
    int i, j = -1;

    printf("Enter expression: ");
    scanf("%s", exp);

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (isalnum(exp[i]))
        {
            opstack[++top] = exp[i];
        }
        else if (exp[i] == '(')
        {
            operators[++j] = exp[i];
        }
        else if (exp[i] == ')')
        {
            while (j >= 0 && operators[j] != '(')
                generate(operators[j--]);

            j--;
        }
        else
        {
            while (j >= 0 &&
                   priority(operators[j]) >= priority(exp[i]))
            {
                generate(operators[j--]);
            }

            operators[++j] = exp[i];
        }
    }

    while (j >= 0)
        generate(operators[j--]);

    printf("Result = t%d\n", temp - 1);

    return 0;
}
