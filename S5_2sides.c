#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&c+a>b){
		printf("it is a valid triangle");
	}
	else{
		printf("not valid");
	}
	return 0;
}
