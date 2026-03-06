#include<stdio.h>
int main()
{
	int x;
	printf("enter value");
	scanf("%d",&x);
	if(x>=0){
		printf("it is positive\n");
	}
	else{
		printf("it is negative\n");
	}
	printf("the value is %d",x);
	return 0;
}
