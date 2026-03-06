#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double d,r1,r2;
	printf("values please");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-(4*a*c);
	r1=-b+(sqrt(d))/2*a;
	r2=-b-(sqrt(d))/2*a;
	if(d==0){
		printf("roots are equal,%lf%lf",r1,r2);
	}
	else if(d>=0){
		printf("roots are real,%lf%lf",r1,r2);
	}
	else if(d<0){
		printf("roots are imaginary,%lf%lf",r1,r2);
	}
	return 0;
}
