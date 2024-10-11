#include<stdio.h>
int main(){
	long int n,first,last;
	printf("Enter the number: ");
	scanf("%ld",&n);
	last=n%10;
	while(n!=0){
		first=n%10;
		n=n/10;
		
	}
	printf("The sum of first & last digit of number is: %d\n",first+last);
	
	return 0;
}
