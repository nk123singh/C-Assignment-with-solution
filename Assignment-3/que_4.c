#include<stdio.h>
int main(){
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
	(year%4==0&&year%100==0 || year%400==0)?printf("The year is LeapYear."):printf("The year is not LeapYear.");
	return 0;
}
