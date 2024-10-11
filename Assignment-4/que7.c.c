#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Enter the constant of quadratic eqn:");
	scanf("%d%d%d",&a,&b,&c);
	int d= b*b - 4*a*c;
	float root1 = (-b + sqrt(d))/(2*a);
	float root2 = (-b - sqrt(d))/(2*a);
	printf("root1: %f\n",root1);
	printf("root2: %f",root2);
	return 0;
}
