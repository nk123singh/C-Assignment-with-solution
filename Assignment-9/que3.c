#include<stdio.h>
int main(){
	int arr[100],sum=0;
	printf("Enter the array elements:");
	int i=0;
	while(i!=5){
		scanf("%d",&arr[i]);
		i++;
	}
	i=0;
	
	while(i!=5){
		sum+=arr[i];
		i++;
	}
	printf("The sum of array is: %d",sum);
	return 0;
}
