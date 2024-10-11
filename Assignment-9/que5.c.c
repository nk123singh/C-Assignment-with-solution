#include<stdio.h>

	
	int main(){
		int n,max1=0,i, max2=1000;
	    printf("Enter the size of array:");
	    scanf("%d",&n);
	    int arr[n];
	    printf("Enter array element:");
	    for(i=0; i<n; i++){
	    scanf("%d",&arr[i]);
        }
        for(i=0; i<n; i++){
    	  if(max1<arr[i]){
    	  	max2=max1;
    	  	max1=arr[i];
		  }
    	 else if(max2<arr[i]&&arr[i]!=max1)
    	  max2=arr[i];
	    }
	    
	    printf("The 2nd largest element is: %d",max2);
	return 0;}

