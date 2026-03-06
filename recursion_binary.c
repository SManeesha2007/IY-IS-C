#include<stdio.h>
int binary(int a[],int low,int high,int key){
	if(low>high)
	return -1;
	else{
		int mid=(low+high)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]>key){
			return binary(a,low,mid-1,key);
		}
		else{
			return binary(a,mid+1,high,key);
		}
	}
}
int main(){
	int i,n,key;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	int res=binary(a,0,n-1,key);
	printf("found at %d",res);
	return 0;
}
