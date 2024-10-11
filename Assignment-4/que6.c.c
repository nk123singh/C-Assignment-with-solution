#include<stdio.h>
int main(){
	
	int a,b, c;
	printf("Please Enter angle of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	 printf("Valid.\n");
	else
	 printf("Invalid.\n");
	return 0;
	
}
