#include <stdio.h>

int main() {
    char op;

    printf("Enter an operator: ");
    scanf("%c", &op);

    if (op == '+')
        printf("Addition Operator\n");
    else if (op == '-')
        printf("Subtraction Operator\n");
    else if (op == '*')
        printf("Multiplication Operator\n");
    else if (op == '/')
        printf("Division Operator\n");
    else
        printf("Invalid Operator\n");

    return 0;
}
