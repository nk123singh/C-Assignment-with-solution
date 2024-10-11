#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float root1, root2, img;
    float d;

    printf("Enter coefficients of the quadratic equation (aX^2 + bX + c):\n");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);

    // Determine roots based on discriminant
    switch (d > 0) {
        case 1: // Positive discriminant
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);
            printf("Root 1: %.2f\n", root1);
            printf("Root 2: %.2f\n", root2);
            break;
        default:                   // Zero or negative discriminant
            if (d == 0) {
                root1 = root2 = -b / (2 * a);
                printf("Real and equal roots: %.2f\n", root1);
            } else {            // Complex roots
                root1 = -b / (2 * a);
                img = sqrt(-d) / (2 * a);
                printf("Complex roots:\n");
                printf("Root 1: %.2f + %.2fi\n", root1, img);
                printf("Root 2: %.2f - %.2fi\n", root1, img);
            }
    }

    return 0;
}

