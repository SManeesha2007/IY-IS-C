#include<stdio.h>
int main(){
	int a=10,b=20;
	int *x,*y;
	x=&a;
	y=&b;
	printf("%d %d %d %d\n",a,b,*x,*y);
	printf("%u %u %u %u\n",x,y,&a,&b);  
	*x=30;
	printf("%d %d %d %d\n",a,b,*x,*y);
	return 0;
}
