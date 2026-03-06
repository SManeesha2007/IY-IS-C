#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int c=0;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			c++;
		}
	}
	if(c==n){
		printf("it is strictly even array");
	}
	else{
		printf("it is not strictly even array");
	}
	return 0;
}
