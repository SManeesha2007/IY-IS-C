#include<stdio.h>
int main(){
	int i,n,k;
	printf("the n value is");
	scanf("%d",&n);
	int arr[n];
	printf("The key value is");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int c=0;
	for(i=0;i<n;i++){
		if(k==arr[i]){
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
