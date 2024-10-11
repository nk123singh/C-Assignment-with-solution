#include <stdio.h>

int main() {
    int a, b;
    int op;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("Sum of %d and %d is: %d\n", a, b, a + b);
            break;
        case 2:
            printf("Difference of %d and %d is: %d\n", a, b, a - b);
            break;
        case 3:
            printf("Multiplication of %d and %d is: %d\n", a, b, a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Division of %d by %d is: %.2f\n", a, b, (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select 1, 2, 3, or 4.\n");
            break;
    }

    return 0;
}

