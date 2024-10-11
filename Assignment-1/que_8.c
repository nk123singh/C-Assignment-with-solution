#include <stdio.h>

int main() {
    int days, years, weeks;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Conversion
    years = days / 365; // Ignoring leap years
    weeks = (days % 365) / 7;

    printf("Years  = %d\n", years);
    printf("Weeks  = %d\n", weeks);
    printf("Days   = %d\n", days - (years * 365) - (weeks * 7));

    return 0;
}

