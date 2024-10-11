#include<stdio.h>
int main(){
	
	int n;
	printf("Please Enter the number:");
	scanf("%d",&n);
	if(n<0)
	 printf("The number is Negative.\n");
	else if(n>0)
	 printf("The number is Positive.\n");
	else
	 printf("The number is Zero.\n");
	return 0;
	
}
