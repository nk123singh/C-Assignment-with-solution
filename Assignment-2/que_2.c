#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,e, total, avg;
	float percent;
	printf("Enter marks of five subjects: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total = a + b + c+ d + e;
	avg = total/5;
	percent = total/5;

	printf("Total = %d\n", total);
	printf("Average = %d\n", avg);
	printf("Percentage = %f\n", percent);
	return 0;
}
