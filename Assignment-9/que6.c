#include<stdio.h>

	
	int main(){
		int n,even=0,i, odd=0;
	    printf("Enter the size of array:");
	    scanf("%d",&n);
	    int arr[n];
	    printf("Enter array element:");
	    for(i=0; i<n; i++){
	    scanf("%d",&arr[i]);
        }
        for(i=0; i<n; i++){
    	  if(arr[i]%2==0)
    	  even++;
    	  else
    	  odd++;
	    }
	    
	    printf("The count of even and odd is: %d & %d",even,odd);
	return 0;}

