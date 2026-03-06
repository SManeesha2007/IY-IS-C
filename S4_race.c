#include<stdio.h>
int main()
{
	int a,b,c;
	float avg;
   	printf("enter speed");
	scanf("%d%d%d",&a,&b,&c);
	avg=(a+b+c)/3;
	if(a>avg){
		printf("speed=%d,qualified",a);
	}
	if(b>avg){
		printf("speed=%d,qualified",b);
	}
	if(c>avg){
		printf("speed=%d,qualified",c);
	}
	return 0;
}
