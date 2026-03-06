#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
int min=arr[0];
for(i=1;i<n;i++){
	if(arr[i]<min){
	min=arr[i];		
   }
  }
  printf("min=%d",min);
	return 0;
}
