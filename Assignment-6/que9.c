#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("Enter the number you want to print table:");
	scanf("%d",&n);
	
	int i=1;
	while(i<=10){
	   printf("%dx%d = %d\n",n,i,n*i);
		i++;
	}
	
	return 0;
	
}
