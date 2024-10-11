#include<stdio.h>
#include<math.h>
int main(){
	int n,first,last,middle;
	printf("Enter the number:");
	scanf("%d",&n);

	int d = (n==0)?1:(int)log10(n)+1;
	d=pow(10,d)/10;
	first = n /d;
	last=n%10;
	middle=n%d;
	middle=middle/10;

	int swap=last*d+middle*10+first;
	printf("Number after swaping 1st & last digit: %d",swap);
	return 0;
}
