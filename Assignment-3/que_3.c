#include<stdio.h>
int main(){
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	(a%2==0)?printf("The number is Even: %d",a):printf("The number is Odd: %d",a);
	
	return 0;
}
