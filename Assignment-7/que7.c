#include<stdio.h>
int main(){
	int i,j,n,pow,ans=1;
	printf("Enter the number:");
	scanf("%d",&n);
	
   
    	for(j=1; j<n; j++){
    		if(n%j==0)
    		printf("%d, ",j);
    		i++;
		}
	//printf("The value is %d",ans);
	return 0;
}
