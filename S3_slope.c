#include<stdio.h>
int main()
{
	int x1,y1,x2,y2;
	float m;
	printf("enter the values");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	m=(y2-y1)/(x2-x1);
	printf("x1=%d\n",x1);
	printf("y1=%d\n",y1);
	printf("x2=%d\n",x2);
	printf("y2=%d\n",y2);
	printf("the slope m is %f",m);
	getch();
	return 0;
}
