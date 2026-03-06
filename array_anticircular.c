#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int temp=arr[0];
	
	for(i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
