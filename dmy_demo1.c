#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr=(int *)malloc(sizeof(int));
	printf("address of ptr=%u\n",ptr);
	*ptr=30;
	printf("value of ptr=%d\n",*ptr);
	free(ptr);
	return 0;
}
