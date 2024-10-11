#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("Enter the number you want to print table:");
	scanf("%d",&n);
	
	int i=0;
	while(n!=0){
	    n/=10;
		i++;
	}
	printf("The number of digit is %d",i);
	return 0;
	
}
