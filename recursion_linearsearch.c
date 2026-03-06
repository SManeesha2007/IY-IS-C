#include<stdio.h>
int linearsearch(int a[],int index,int n,int key){
	if(n==index){
		return -1;
	}
	else if(a[index]==key){
		return index;
	}
	return linearsearch(a,index+1,n,key);
}
int main(){
	int n,i,key;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	int res=linearsearch(arr,0,n,key);
	printf("%d",res);
	return 0;
}
