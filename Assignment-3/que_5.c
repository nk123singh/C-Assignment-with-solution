#include<stdio.h>
int main(){
	char a;
	printf("Enter the character: ");
	scanf("%c",&a);
	(a>='A' && a<='z')?printf("Entered value is valid character"):printf("It is invalid character");
	
	return 0;
}
