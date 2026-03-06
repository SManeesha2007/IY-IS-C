#include<stdio.h>
int main()
{
	int b,h;
	float area;
	printf("give values");
	scanf("%d%d",&b,&h);
	area=0.5*b*h;
	printf("value of breadth=%d\n",b);
	printf("value of height=%d\n",h);
	printf("value of area=%f\n",area);
	getch();
	return 0;
}
