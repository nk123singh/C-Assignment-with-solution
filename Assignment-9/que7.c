#include<stdio.h>

	
	int main(){
		int n,i,count=0;
	    printf("Enter the size of array:");
	    scanf("%d",&n);
	    int arr[n];
	    printf("Enter array element:");
	    for(i=0; i<n; i++){
	    scanf("%d",&arr[i]);
        }
        for(i=0; i<n; i++){
    	  if(arr[i]<0)
    	  count++;
    	  
	    }
	    
	    printf("The total -ve element is: %d",count);
	return 0;}

