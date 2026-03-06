#include<stdio.h>
void bubble(int arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
			  int temp=arr[j];
		      arr[j]=arr[j+1];
		      arr[j+1]=temp;
		   }
		}
	}
	display(arr,n);
}
void display(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		
			printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	display(arr,n);
	bubble(arr,n);
	return 0;
}

