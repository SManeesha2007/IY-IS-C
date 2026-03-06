#include<stdio.h>
int main(){
	int x=101;
	int *ptr;
	ptr=&x;
	printf("%u %u\n",&x,ptr);
	printf("%d %d",x,*ptr);
	return 0;
}
