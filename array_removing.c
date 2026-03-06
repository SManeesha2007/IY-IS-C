#include<stdio.h>
int main(){
	int n,i,p,e;
	printf("the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("the position of array to be removed\n");
	scanf("%d",&p);
	printf("the element that should be removed is\n");
	scanf("%d",&e);
	printf("the elements in the array are\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=p-1;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n++;
	for(i=0;i<n-2;i++)
		printf("%d ",arr[i]);
	return 0;
}
