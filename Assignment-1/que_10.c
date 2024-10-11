int main() {
    int second, H, M, S;

    // Asking for input
    printf("Enter the Second: ");
    scanf("%d", &second);

    // Calculating hours and remaining minutes
    H = second / 3600;
    second = second % 3600;
    M = second/60;
    S = second%60;
    // Displaying output
  
    printf("H : M : S - %d: %d: %d\n", H, M, S);

    return 0;
}
