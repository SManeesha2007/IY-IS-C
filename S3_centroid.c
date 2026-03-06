#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	float a,b;
	printf("enter value");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	a=x1+x2+x3/3;
	b=y1+y2+y3/3;
	printf("The centroid is %f,%f",a,b);
	getch();
	return 0;
}
