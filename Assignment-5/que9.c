#include <stdio.h>

int main() {
    int phy,chem,bio,maths,cmp;
	int prcnt;

    printf("Input five subjects mark: ");
    scanf("%d%d%d%d%d", &phy,&chem,&bio,&maths,&cmp);
    prcnt=(phy+chem+bio+maths+cmp)/5;
    printf("Percentage = %d\n",prcnt);
    switch (  prcnt / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        case 5:
            printf("Grade: E\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }

    return 0;
}

