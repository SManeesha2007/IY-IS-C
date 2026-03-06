#include<stdio.h>
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
	while(i<=m) res[k++]=a[i++];
	while(j<=h) res[k++]=a[j++];
	 k=0;
	for(i=l;i<=h;i++){
		a[i]=res[k++];
		printf("%d ",a[i]);
	}
}
int main(){
	int a[]={31,47,91,144,258,7,19,21,33,44,57,100,148};
	merge(a,0,4,12);
	return 0;
}
