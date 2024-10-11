#include<stdio.h>
int main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	while(x!=0){
		int a=x%10;
		printf("%d\n",a);
		x=x/10;
	}

	
	//printf("The maximum number is:%d",max);
   return 0;	
}
