#include<stdio.h>
void printarray(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void insertion(int arr[],int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key=arr[i],j=i-1;
		while(j>=0&&key<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		printf("pass %d : ",i);
		printarray(arr,n);
	}
}
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	insertion(arr,n);
	return 0;
}
