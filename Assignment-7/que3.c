#include<stdio.h>
int main(){
	int si;
	printf("Enter size of array:");
	scanf("%d",&si);
	int n[si];
	printf("Enter the number:");
	int j=0;
	
	while(j!=si){
		scanf("%d",&n[j]);
		j++;
	}
	int arr[10]={0};
	int i;
	
	for( i=0; i<si;i++){
		arr[n[i]]++;
	}
	for( i=0; i<10; i++){
		printf("%d -> %d\n",i,arr[i]);
	}
	return 0;
}
