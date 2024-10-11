#include<stdio.h>
int main(){
	int a;
	printf("Enter the numbers:");
	scanf("%d",&a);
	switch(a>0){
		case 1:
			printf("The number is %d +ve", a);
	        break;
	    case 0: 
	    {
		switch(a<0){
		case 1:
			printf("The number is %d -ve", a);
		break;
	    default:
	    	printf("The number is %d Zero", a);
    	}
      }
	}

	
	
	return 0;
}
