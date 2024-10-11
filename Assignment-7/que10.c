#include<stdio.h>
int main(){
	int n1,n2,max,lcm,j;
	printf("Enter the numbers:");
	scanf("%d%d",&n1,&n2);
	if(n1<n2)
	 max=n2;
	else
	 max=n1;
       while(1){
    		if(max%n1==0 && max%n2==0){
    		  lcm=max;
			  break;	
		    }
		max=max+max;
       }
		printf("The LCM is:%d",lcm);
	//printf("The value is %d",ans);
	return 0;
}
