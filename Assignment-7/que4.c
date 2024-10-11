#include<stdio.h>
int main(){
	int n,rev1=0,rev2=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0){
		rev1= rev1*10+n%10;
		n=n/10;
	}
	while(rev1!=0){
		rev2= rev1%10;
	
		switch(rev2){
			case 1:printf("one");break;
			case 2:printf("two");break;
			case 3:printf("three");break;
			case 4:printf("four");break;
			case 5:printf("five");break;
			case 6:printf("six");break;
			case 7:printf("seven");break;
			case 8:printf("eight");break;
			case 9:printf("nine");break;
		}
	  rev1=rev1/10;	
	}
//	printf("The reverse of number is:%d",rev);
	return 0;
}
