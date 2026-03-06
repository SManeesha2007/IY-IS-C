#include<stdio.h>
int main()
{
	int amt,amount;
	printf("value");
	scanf("%d",&amt);
	if(amt>=500){
		amount=amt*(0.2);
	}
	else if(amt>=300&&amt<500){
	    amount=amt*(0.1);
	}
	else if(amt<300){
		printf("no discount\n"); 
	}
	printf("%d",amount);
	return 0;
}
