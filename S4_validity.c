#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter angles");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180){
		printf("it is a triangle,valid");
	}
	else{
		printf("not valid");
	}
	return 0;
}

