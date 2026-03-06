#include<stdio.h>
int main()
{
	int t=99,h=92,e=97,m=100,sc=94,s=87,total;
	float avg,per;
	total=t+h+e+m+sc+s;
	avg=total/6;
	per=avg/100;
	printf("The Total of marks=%d\n",total);
	printf("The average of marks=%f\n",avg);
	printf("The percentage of marks=%f\n",per);
	getch();
	return 0;
}
