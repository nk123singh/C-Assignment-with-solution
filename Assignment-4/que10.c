#include<stdio.h>
int main(){
	
	int phy,chem,bio,maths,cmp,sum=0;
	float prcnt;
	printf("Input marks of five subjects: ");
	scanf("%d%d%d%d%d",&phy,&chem,&bio,&maths,&cmp);
	sum=phy+chem+bio+maths+cmp;
	prcnt=sum/5;
	if(prcnt>=90){
	    printf("Percentage = %.2f\n",prcnt);
	    printf("Grade A");
	}
	else if(prcnt>=80){
		printf("Percentage = %.2f\n",prcnt);
	    printf("Grade B");
	}
	else if(prcnt>=70){
		printf("Percentage = %.2f\n",prcnt);
	    printf("Grade C");
	
	}
	else if(prcnt>=60){
		printf("Percentage = %.2f\n",prcnt);
	    printf("Grade D");
	}
	else if(prcnt>=40){
		printf("Percentage = %.2f\n",prcnt);
	    printf("Grade E");
	}
	else{
		printf("Percentage = %.2f\n",prcnt);
	    printf("Grade F");
	}

	return 0;
	
}
