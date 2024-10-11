#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	int frq[n];
	printf("Enter the elements of array:");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
		frq[i]=0;
	}
	for(i=0; i<n; i++){
		frq[arr[i]]++;
	}
	
	for(i=0; i<n;i++){
		if(frq[i]>1)
		count++;
	}
    printf("The total number of duplicat elements are: %d",count);
	return 0;
	
}
