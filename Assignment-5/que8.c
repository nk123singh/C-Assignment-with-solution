#include <stdio.h>

int main() {
    char operator;
    double a, b;
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            printf("%.3f + %.3f = %.3f\n", a,b,a+b);
            break;
        case '-':
            printf("%.3f - %.3f = %.3f\n", a,b,a-b);
            break;
        case '*':
            printf("%.3f * %.3f = %.3f\n", a,b,a*b);
            break;
        case '/':
            if (b != 0) {
                printf("%.3f / %.3f = %.3f\n", a,b,a/b);
            } else {
                printf("Error! Division by zero is not allowed\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

