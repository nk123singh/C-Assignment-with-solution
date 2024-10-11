#include<stdio.h>
int main(){
	int n,rev=0;
	int temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		rev=rev*10 +n%10;
		n=n/10;
	}
	
	if(temp==rev)
	 printf("The number is palindrome");
	else
	 printf("It is not palindrome.");
	return 0;
}
