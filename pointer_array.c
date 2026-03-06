#include<stdio.h>
int main(){
	int arr[5]={11,22,33,44,55};
	int *ptr;
	ptr=&arr[0];
	int i;
	for(i=0;i<5;i++){
		printf("%u -> %d\n",(ptr+i),*(ptr+i));
	}
	return 0;
}
