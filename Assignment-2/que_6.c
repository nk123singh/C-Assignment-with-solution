#include<stdio.h>
#include<math.h>
int main(){
	int distance,fuel;
	float  avg;
	printf("Enter total distance in km= ");
	scanf("%d",&distance);
	printf("\nEnter total fuel spent in liters= ");
	scanf("%d",&fuel);
	avg = distance/fuel;
	
	printf("The average consumption= %f\n", avg);
	return 0;
}
