#include<stdio.h>
void printarray(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int low,int high){
	int pivot=a[low];
	int i=low+1;
	int j;
	for(j=low+1;j<=high;j++){
		if(a[j]<pivot){
			swap(&a[i],&a[j]);
			i++;
		}
	}
	swap(&a[low],&a[i-1]);
	return (i-1);
}
void quick(int a[],int low,int high){
	if(low<high){
		int pi=partition(a,low,high);
		quick(a,low,pi-1);
		quick(a,pi+1,high);
	}
}
int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("before sorting\n");
	printarray(a,n);
	quick(a,0,n-1);
	printf("after sorting\n");
	printarray(a,n);
	return 0;
}
