#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Please Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("\n%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    return 0;
}

