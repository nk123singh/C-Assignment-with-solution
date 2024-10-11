#include<stdio.h>
int main(){
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	a>0?printf("The number is +ve"):(a<0)?printf("The number -ve"):printf("The number is zero");
	
	return 0;
}
