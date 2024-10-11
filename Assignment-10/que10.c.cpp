#include<stdio.h>
int main(){
	int n,i;
	int arr[100],eve[100],odd[100];
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter the elements of array:");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
    int k=0, l=0;
	for(i=1; i<n;i++){
	    int temp=arr[i];
	    int j=i-1;
	    while((temp<arr[j]) && j>=0){
	    	arr[j+1]=arr[j];
	    	--j;
		}
		arr[j+1]=temp;
		
	}
	
	for(i=0; i<n; i++){
		if(arr[i]%2==0) 
		 eve[k++]=arr[i];
		else 
		 odd[l++]=arr[i];
	}
    printf("Even sorted array is:");
    for(i=0; i<k; i++)
    	printf("%d ",eve[i]);
    printf("\nOdd sorted array is:");
	for(i=0; i<l; i++)
    	printf("%d ",odd[i]);
    
	return 0;
	
}
