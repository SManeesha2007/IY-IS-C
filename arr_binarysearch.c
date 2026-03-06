#include<stdio.h>
int binarysearch(int[],int,int);
int binarysearch(int arr[],int n,int target)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==target)
			return mid;
		else if(arr[mid]<target)
			low=mid+1;
		else
			high=mid-1;
	}
	return -1;
}
int main()
{
	int n,i,target;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&target);
	int index;
    index=binarysearch(arr,n,target);
		if(index==-1)
			printf("element not found");
		else
			printf("element %d is at %d positon",target,index);
	return 0;
}
