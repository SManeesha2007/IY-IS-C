#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int c=0;
	for(i=1;i<n;i++){
	   if(arr[i]%i==0){
	   	c++;
	   }	
	}
	printf("%d",c);
	return 0;
}
