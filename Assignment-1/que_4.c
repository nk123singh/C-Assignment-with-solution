#include <stdio.h>

int main() {
    float radius;
    float volume;

    // Asking for input
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculating volume of sphere
    volume = 1.33 * 3.14 * radius * radius * radius;

    // Displaying output
    printf("Volume of Sphere: %.6f\n", volume);

    return 0;
}

