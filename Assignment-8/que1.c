#include<stdio.h>
int main(){
	int n,first,last;
	printf("Enter the number: ");
	scanf("%d",&n);
	last=n%10;
	while(n!=0){
		first=n%10;
		n=n/10;
		
	}
	printf("The first digit of number is: %d\n",first);
	printf("The last digit of number is: %d\n",last);
	return 0;
}
