#include<stdio.h>
int main(){
	int i,j,n,pow,fact=1;
	printf("Enter the number:");
	scanf("%d",&n);
	
   
    	for(j=n; j>0; j--){
    		fact=fact*j;
    		
		}
		printf("The factorial is:%d",fact);
	//printf("The value is %d",ans);
	return 0;
}
