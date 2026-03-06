#include<stdio.h>
int main()
{
	int l,b,perimeter;
	printf("enter the value ");
	scanf("%d%d",&l,&b);
	perimeter=2*(l+b);
	printf("perimeter of rectangle=%d",perimeter);
	getch();
	return 0;
}
