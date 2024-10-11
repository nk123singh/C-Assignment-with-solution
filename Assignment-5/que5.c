#include<stdio.h>
int main(){
	int a;
	printf("Enter the numbers:");
	scanf("%d",&a);
	switch(a%2==0){
		case 1:
			printf("The number %d is Even", a);
	        break;
	
		case 0:
			printf("The number %d is Odd", a);
	}

	
	
	return 0;
}
