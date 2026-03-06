#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double s,area;
	printf("enter the value\n");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("value of a = %d\n",a);
	printf("value of b = %d\n",b);
	printf("value of c = %d\n",c);
	printf("herons value =%lf",area);
	getch();
	return 0;
}
