#include<stdio.h>
int main()
{
	int R;
	float area;
	printf("enter value of radius");
	scanf("%d",&R);
	area=((3.14)*R*R);
	printf("area of circle=%f",area);
	getch();
	return 0;
}
