#include<stdio.h>
#include<string.h>
int main(){
	int i=1,sum=0;
	
	
	
	while(i<=100){
		if(i%2!=0)
		sum+=i;
		i++;
	}
	printf("sum: %d",sum);
	
	return 0;
	
}
