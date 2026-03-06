#include<stdio.h>
void increment(int *ptr,int n){
	int i;
	for(i=0;i<n;i++){
	    *(ptr+i)=*(ptr+i)+1;
	}
	printf("\nafter calling increment\n");
	for(i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
}
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("before calling increment\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	increment(arr,n);
	return 0;
}
