#include<stdio.h>
int main()
{
	int a,n,d,nth_Term;
	printf("enter");
	scanf("%d%d%d",&a,&n,&d);
	nth_Term=a+(n-1)*d;
	printf("the nth Term of arithmetics=%d",nth_Term);
	getch();
	return 0;
	
}
