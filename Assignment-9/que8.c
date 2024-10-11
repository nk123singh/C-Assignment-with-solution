#include<stdio.h>

	
	int main(){
		int n,max1=0,i, max2=0;
	    printf("Enter the size of array:");
	    scanf("%d",&n);
	    int arr[n],arrcpy[n];
	    printf("Enter array element in arr:");
	    for(i=0; i<n; i++){
	    scanf("%d",&arr[i]);
        }
        for(i=0; i<n; i++){
    	  arrcpy[i]=arr[i];
	    }
	    printf("The copy array in arrcpy is:");
	    for(i=0; i<n; i++){
	    printf(" %d",arrcpy[i]);}
	return 0;}

