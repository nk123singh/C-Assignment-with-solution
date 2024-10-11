#include<stdio.h>
#include<math.h>
int main(){
	int x1,y1,x2,y2;
	float pt_distance;
	printf("Enter first co-ordinate point= ");
	scanf("%d%d",&x1,&y1);
	printf("\nEnter second co-ordinate point= ");
	scanf("%d%d",&x2, &y2);
	pt_distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	
	printf("The distance between the point is = %f\n", pt_distance);
	return 0;
}
