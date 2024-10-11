
	
#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("Please Enter sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c && c==a)
	 printf("Equilateral.\n");
	else if(a!=b && b!=c && c!=a)
	 printf("Scalene.\n");
	else
	 printf("Isosceles.");
	
	return 0;
	
}
	

