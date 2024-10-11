#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	a>=b?printf("The maximum number is: %d",a):printf("The maximum number is: %d",b);;
	
	return 0;
}
