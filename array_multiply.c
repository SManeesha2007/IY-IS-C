#include<stdio.h>
int main(){
	int i,pro=1;
	int arr[10];
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		pro=pro*arr[i];
	}
	printf("The first 10 multiples of the given array is %d",pro);
	return 0;
}
