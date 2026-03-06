#include<stdio.h>
void printarray(int a[],int index,int n){
	if(index==n)
		return;
	printf("%d ",a[index]);
	printarray(a,index+1,n);
}
int main(){
	int a[6]={1,2,3,4,5,6};
	printarray(a,0,6);
	return 0;
}
