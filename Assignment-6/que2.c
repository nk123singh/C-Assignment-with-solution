#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int i=n;
	
	while(i!=0){
		printf("%d ",i--);
	}
	
	
	return 0;
	
}
