#include<stdio.h>
int main()
{
	int a,l,n;
	float sn;
	printf("enter values");
	scanf("%d%d%d",&a,&l,&n);
	sn=n/2*(a+l);
	printf("value of a=%d\n",a);
	printf("value of l=%d\n",l);
	printf("value of n=%d\n",n);
	printf("sum of arithmetics=%f",sn);
	getch();
	return 0;
}
