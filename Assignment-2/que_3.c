#include<stdio.h>
#include<math.h>
int main(){
	int  side;
	float aria;
	printf("Enter the side of equilateral triangle = ");
	scanf("%d",&side);
     aria = sqrt(3)/4*(side*side);
	
	printf("The aria of triangle is = %f sq.units\n", aria);
	return 0;
}
