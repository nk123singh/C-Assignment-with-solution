#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    printf("\nSimple Interest = %.2f", interest);

    return 0;
}

