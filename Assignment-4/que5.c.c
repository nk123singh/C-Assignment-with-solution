#include<stdio.h>
int main(){
	
	int n;
	printf("Please Enter month number:");
	scanf("%d",&n);
	if(n>=1 && n<=12&&n%2!=0)
	 printf("31Days.\n");
	else{
		if(n==7)
		 printf("31Days.\n");
		else
		printf("30Days.\n");
	}
	 //printf("The number is Zero.\n");
	return 0;
	
}
