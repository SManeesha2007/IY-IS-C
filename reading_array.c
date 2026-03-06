#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		// reading of array
		scanf("%d",&arr[i]);
	}
	printf("the elements in array\n");
	for(i=0;i<n;i++){
	   // printing the array
	   printf("%d ",arr[i]);
	}
	return 0;
}
