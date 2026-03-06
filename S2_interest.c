#include<stdio.h>
int main()
{
	int p,t,r;
	float i;
	printf("enter\n");
	scanf("%d%d%d",&p,&t,&r);
	i=(p*t*r)/100;
	printf("value of p=%d\n",p);
	printf("value of t=%d\n",t);
	printf("value of r=%d\n",r);
	printf("I=('%f')",i);
	getch();
	return 0;
}
