#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	int frq[n];
	int uniq[n];
	printf("Enter the elements of array:");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
		frq[arr[i]]=1;
	}
	for(i=0; i<n; i++){
		if(frq[arr[i]]==1){
			frq[arr[i]]=0;
			uniq[i]=arr[i];
		}
	}
	printf("The unique elements are:");
	for(i=0; i<n;i++){
		if(uniq[i]==0)
		continue;
		printf("%d ",uniq[i]);
	}

	return 0;
	
}
