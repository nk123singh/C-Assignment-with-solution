#include<stdio.h>
#include<math.h>
int main(){
	int principle, time;
	float rate, CI;
	printf("Enter principle amount = ");
	scanf("%d",&principle);
	printf("\nEnter time = ");
	scanf("%d",&time);
	printf("\nEnter the interest rate = ");
	scanf("%f",&rate);
	CI = principle*pow((1 + rate/100),(time));
	printf("The compound interest is = %f\n", CI);
	return 0;
}
