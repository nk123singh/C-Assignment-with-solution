#include<stdio.h>
#include<math.h>
int main(){
	int no_1,no_2;
	float wt_1, wt_2, avg;
	printf("Enter weight of item 1 and 2= ");
	scanf("%f%f",&wt_1,&wt_2);
	printf("\nEnter the number of item 1 and 2= ");
	scanf("%d%d",&no_1, &no_2);
	avg = (no_1*wt_1 + no_2*wt_2)/(no_1 + no_2);
	
	printf("The average value of item = %f\n", avg);
	return 0;
}
