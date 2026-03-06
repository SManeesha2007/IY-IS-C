#include<stdio.h>
#include<stdlib.h>
int *send_array(int A[],int n){
	int *B=(int *)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++){
		B[i]=A[i]*A[i];
		printf("%d ",B[i]);
	}
	printf("\n");
	printf("memory allocated in heap : %d\n",B);
	return B;
}
int main(){
	int A[5]={10,20,30,40,50};
	int *B=send_array(A,5);
	int i;
	printf("memory stayed intact : %d\n",B);
	return 0;
}
