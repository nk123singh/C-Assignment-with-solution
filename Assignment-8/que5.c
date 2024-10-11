#include<stdio.h>
int main(){
	long int n,mul=1;
	printf("Enter the number: ");
	scanf("%ld",&n);
	if(n==0){
		printf("The product is: 0");
		return 0;
	}
	while(n!=0){
		mul = mul * (n%10);
		n=n/10;	
	}
    printf("The pruduct of digit of number is: %ld",mul);
	return 0;
}
