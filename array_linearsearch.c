#include<stdio.h>
int linearsearch(int arr[],int n,int target){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==target){
			return i;
		}
	}
		return -1;
}
int main(){
	int i,n,target;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&target);
	int res=linearsearch(arr,n,target);
	if(res!=-1){
		printf("element found at index %d",res);
	}
	else{
		printf("element not found");
	}
	return 0;
}
