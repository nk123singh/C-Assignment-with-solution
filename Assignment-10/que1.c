#include<stdio.h>
int main(){
	int n,i;
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
	printf("The frequency of elements are:");
	for(i=0; i<n;i++){
		printf("%d -> %d\n",i,frq[i]);
	}

	return 0;
	
}
