#include <stdio.h>

int main() {
    int employeeID;
    float hourlyRate, totalHoursWorked, salary;

    // Input employee details
    printf("Enter employee ID: ");
    scanf("%d", &employeeID);
    printf("Enter hourly rate: ");
    scanf("%f", &hourlyRate);
    printf("Enter total hours worked in a month: ");
    scanf("%f", &totalHoursWorked);

    // Calculate base salary (up to 40 hours)
    salary = hourlyRate * totalHoursWorked;

    

    // Display results
    printf("\nEmployee ID: %d\n", employeeID);
    printf("Salary for the month: %.2f \n", salary);

    return 0;
}

