#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the numbers:");
	scanf("%d%d",&a,&b);
	switch(a>b){
		case 1:
			printf("The maximum number is %d", a);
	        break;
	
		case 0:
			printf("The maximum number is %d", b);
	}

	
	
	return 0;
}
