#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	//a>=b?printf("The maximum number is: %d",a):printf("The maximum number is: %d",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The swap number is:%d %d", a,b);
	return 0;
}
