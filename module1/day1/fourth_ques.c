#include <stdio.h>

int main() {
    float op1, op2, res;
    char operator;

    printf("Enter Number1: ");
    scanf("%f", &op1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%f", &op2);

    switch (operator) {
        case '+':
            res = op1 + op2;
            printf("Result: %.2f\n", res);
            break;
        case '-':
            res = op1 - op2;
            printf("Result: %.2f\n", res);
            break;
        case '*':
            res = op1 * op2;
            printf("Result: %.2f\n", res);
            break;
        case '/':
            if (op2 != 0) {
                res = op1 / op2;
                printf("Result: %.2f\n", res);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}