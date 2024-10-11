#include<stdio.h>
#include<string.h>
int main(){
	int n,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int i=1;
	
	while(i!=(n+1)){
		sum+=i;
		i++;
	}
	printf("%d ",sum);
	
	return 0;
	
}
