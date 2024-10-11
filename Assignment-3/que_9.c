#include<stdio.h>
#include<math.h>
int main(){
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	(x>=0)?printf("The absolute value is %d",x):printf("The absolute value is %d", abs(x));
	return 0;
}
