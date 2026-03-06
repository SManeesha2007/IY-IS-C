#include<stdio.h>
void merge(int a[],int m,int b[],int n){
	int i=0,j=0,k=0;
	int res[m+n];
    while(i<m&&j<n){
    	if(a[i]<=b[j]){
    		res[k++]=a[i++];
		}
		else{
			res[k++]=b[j++];
		}
	}
	while(i<m){
		res[k++]=a[i++];
	}
	while(j<n){
		res[k++]=b[j++];
	}
	for(k=0;k<m+n;k++)
	printf("%d ",res[k]);
}
int main(){
	int a[5]={31,47,91,144,258};
	int b[7]={7,19,21,33,44,57,100,148};
	merge(a,5,b,7);
	return 0;
}
