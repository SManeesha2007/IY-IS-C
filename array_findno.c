#include<stdio.h>
int main(){
	int n,i,k;
	printf("enter the value");
	scanf("%d",&n);
	int arr[n];
	printf("give the value of k");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The values are\n");
	int found =0;
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
		if(arr[i]==k){
			found = 1;
			break;
		}
	}
	if(found ==0)
	{
		printf("not found");
	}
	else 
	{
		printf("found");
	}
	return 0;
}
