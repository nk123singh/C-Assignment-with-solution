#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int i=1;
	
	while(i!=(n+1)){
		printf("%d ",i++);
	}
	
	
	return 0;
	
}
