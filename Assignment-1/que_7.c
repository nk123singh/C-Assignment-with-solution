int main() {
    int first_angl, second_angl, third_angl;

    // Asking for input
    printf("Enter the First and Second Angle: ");
    scanf("%d %d", &first_angl, &second_angl);

    // Calculating third angle
    third_angl=180-first_angl - second_angl;
    
    // Displaying output
    
    printf("Third Angle of Triangle is: %d\n", third_angl);

    return 0;
}
