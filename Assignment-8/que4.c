#include<stdio.h>
int main(){
	long int n,sum=0;
	printf("Enter the number: ");
	scanf("%ld",&n);
	while(n!=0){
		sum=sum+n%10;
		n=n/10;	
	}
    printf("The sum of digit of number is: %d",sum);
	return 0;
}
