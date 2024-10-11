int main() {
    int km_hr;
    float mile_hr;

    // Asking for input
    printf("Enter the kkm per hour: ");
    scanf("%d", &km_hr);

    // Calculating volume of sphere
    mile_hr = 0.621371*km_hr;

    // Displaying output
    printf("Miles per hour: %.6f\n", mile_hr);

    return 0;
}

