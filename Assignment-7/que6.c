#include<stdio.h>
int main(){
	int i,j,n,pow,ans=1;
	printf("Enter the value:");
	scanf("%d",&n);
	printf("Enter the power:");
	scanf("%d",&pow);
   
    	for(j=0; j<pow; j++){
    		ans=n*ans;
		}
	printf("The value is %d",ans);
	return 0;
}
