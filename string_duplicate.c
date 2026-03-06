#include<stdio.h>
int main(){
	int n,i,j=1,k,available=0;
	printf("enter the array no\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int temp[n];
	temp[0]=arr[0];
	for(i=1;i<n;i++){
		available=0;
			for(k=0;k<j;k++){
			if(arr[i]==temp[k]){
				available=1;
				break;
			}
		}
		if(available==0){
		temp[j]=arr[i];
		j++;
	} 
}
	
	printf("the given array\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("after removing duplicate\n");
	for(i=0;i<j;i++){
		printf("%d ",temp[i]);
	}
}
