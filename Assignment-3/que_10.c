#include<stdio.h>
int main(){
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	(x>=10 && x<=20)?printf("The number is in range."):printf("The number is out of range.");
	return 0;
}
