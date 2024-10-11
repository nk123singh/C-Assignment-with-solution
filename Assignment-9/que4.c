#include<stdio.h>
int main(){
	int arr[100],max=0, min=1000;
	printf("Enter the array elements:");
	int i=0;
	while(i!=5){
		scanf("%d",&arr[i]);
		i++;
	}
	i=0;
	
	while(i!=5){
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		 min=arr[i];
		i++;
	}
	printf("The maximum element in array is %d\n",max);
	printf("The minimum element in array is %d",min);
	return 0;
}
