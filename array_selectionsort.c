#include<stdio.h>
void printarray(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void selection(int arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		int minindex=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[minindex])
			minindex=j;
		}
		int temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
		printf("pass %d: ",i+1);
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
	selection(arr,n);
	return 0;
}
