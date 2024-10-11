#include<stdio.h>	
	int main(){
		int n,i,p;
	    printf("Enter the size of array:");
	    scanf("%d",&n);
	    int arr[n];
	    printf("Enter array element in arr:");
	    for(i=0; i<n; i++){
	    scanf("%d",&arr[i]);
        }
        
        printf("Position form which to delete:");
        scanf("%d",&p);
        int j=0;
        for(i=0; i<n;i++){
        	if(i==p)
        	continue;
        	arr[j++]=arr[i];
		} 
	    printf("The  array after deletion:");
	    for(i=0; i<n+1; i++){
	    printf(" %d",arr[i]);}
	return 0;
	}
