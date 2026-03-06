#include<stdio.h>
void printarray(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void merge(int a[],int l,int m,int h){
	int i=l,j=m+1,k=0;
	int res[h-l+1];
	while(i<=m&&j<=h){
		if(a[i]<=a[j]){
			res[k++]=a[i++];
		}
		else{
			res[k++]=a[j++];
		}
	}
	while(i<=m){
		res[k++]=a[i++];
	}
	while(j<=h){
		res[k++]=a[j++];
	}
	k=0;
	for(i=l;i<=h;i++){
	a[i]=res[k];
	k++;
    }
    printarray(a,k);
}
void mergesort(int a[],int l,int h){
	if(l<h){
		int m=(l+h)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,h);
		merge(a,l,m,h);
	}
}
int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("before sorting\n");
	printarray(a,n);
	printf("after sorting\n");
	mergesort(a,0,n-1);
	return 0;
}
