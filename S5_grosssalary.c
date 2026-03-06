#include<stdio.h>
int main()
{
	int s;
	double hra,da,gs;
	printf("salary");
	scanf("%d",&s);
	if(s<=10000){
		hra=0.2*s;
		da=0.8*s;
	}
	else if(s<=20000){
		hra=0.25*s;
		da=0.9*s;
	}
	else if(s>20000){
		hra=0.3*s;
		da=0.95*s;
	}
	gs=hra+da+s;
	printf("the grosssalary is %lf",gs);
	return 0;
}
