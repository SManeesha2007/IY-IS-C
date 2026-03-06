#include<stdio.h>
int main()
{
	char op;
	double a = 20.0 , b = 10.0;
	scanf("%c",&op);
	switch(op){
		case '+':printf("%lf+%lf=%lf",a,b,a+b);
	    break;
	    case '-':printf("%lf-%lf=%lf",a,b,a-b);
	    break;
	    case '*':printf("%lf*%lf=%lf",a,b,a*b);
	    break;
	    case '/':printf("%lf/%lf=%lf",a,b,a/b);
	    break;
	    default:printf("error");
	}
	return 0;
}
