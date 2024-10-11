#include<stdio.h>	
	int main(){
		int n,i;
	    printf("Enter the size of array:");
	    scanf("%d",&n);
	    int arr[n];
	    printf("Enter array element in arr:");
	    for(i=0; i<n; i++){
	    scanf("%d",&arr[i]);
        }
        arr[n+1];
        printf("Insert an element in array:");
        scanf("%d",&arr[n]);
	    printf("The  array after insertion:");
	    for(i=0; i<n+1; i++){
	    printf(" %d",arr[i]);}
	return 0;
	}
