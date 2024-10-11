#include <stdio.h>

int main() {
    int minutes, hours, remaining_minutes;

    // Asking for input
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    // Calculating hours and remaining minutes
    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    // Displaying output
    printf("Entered minutes = %d minutes\n", minutes);
    printf("Equivalent to = %d hours and %d minutes\n", hours, remaining_minutes);

    return 0;
}

