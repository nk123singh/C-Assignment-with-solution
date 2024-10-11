#include<stdio.h>
int main(){
	int arr[100];
	printf("Enter the array elements:");
	int i=0;
	while(i!=5){
		scanf("%d",&arr[i]);
		i++;
	}
	i=0;
	printf("The array elements are: ");
	while(i!=5){
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
}
