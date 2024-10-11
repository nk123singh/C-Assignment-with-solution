#include<stdio.h>
int main(){
	
	int unit;
	float bill;
	printf("Please provide Bill units:");
	scanf("%d",&unit);
	
	if(unit<=50){
		bill=unit*0.50;
	}
	else if(unit>50 && unit<=150){
		bill= 25 + (unit - 50)*0.75;
	}
	
	else if(unit>150 && unit<=250){
		bill= 100 + (unit - 150)*1.20;
	
	}
	else {
		bill= 220 + (unit - 250)*1.50;
	}
	float surplus = bill/5;
	bill = bill + surplus;
	printf("%.2f",bill);
	return 0;
	
}
