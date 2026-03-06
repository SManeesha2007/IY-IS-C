#include<stdio.h>
int main(){
	int arr[10],i,n,pos,ele;
	printf("the value of n is");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		printf("the position of element to insert\n");
		scanf("%d",&pos);
		printf("the element to be insert\n");
		scanf("%d",&ele);
	    printf("before inserting\n");
		for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		printf("\n");
		for(i=n;i>pos-1;i--){
			arr[i]=arr[i-1];
		}
		arr[pos-1]=ele;
		n++;
		printf("after inserting\n");
		for(i=0;i<n;i++)
		printf("%d ",arr[i]);
        return 0;
}
