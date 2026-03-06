#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,n6,sum;
	float mean;
	printf("enter value");
	scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);
	sum=n1+n2+n3+n4+n5+n6;
	mean=sum/6;
	printf("The sum is %d\n",sum);
	printf("The mean is %f\n",mean);
	getch();
	return 0;
}
