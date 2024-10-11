#include<stdio.h>
int main(){
	int a,b,c, max;
	printf("Enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>=b && a>=c)?a:(b>a && b>c)?b:c;
	printf("The maximum number is:%d",max);
   return 0;	
}
