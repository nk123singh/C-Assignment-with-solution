#include<stdio.h>
int main(){
	int n1,n2,min,hcf,j;
	printf("Enter the numbers:");
	scanf("%d%d",&n1,&n2);
	if(n1<n2)
	 min=n1;
	else
	 min=n2;
   
    	for(j=1; j<=min; j++){
    		if(n1%min==0 && n2%min==0)
    		  hcf=j;	
		}
		printf("The HCF is:%d",hcf);
	//printf("The value is %d",ans);
	return 0;
}
