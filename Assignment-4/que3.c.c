#include<stdio.h>
int main(){
	
	 char c;
	printf("Please Enter the character:");
	scanf("%c",&c);
	if(c>='A'&& c<='z' )
	 printf("The character is alphabet.\n");
	else if(c>='0'&&c<='9')
	 printf("The character is digit.\n");
	else
	 printf("The character is special symbol.\n");
	return 0;
	
}
