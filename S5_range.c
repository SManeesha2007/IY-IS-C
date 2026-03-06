#include<stdio.h>
int main()
{
	int x;
	printf("give a value");
	scanf("%d",&x);
	if(x>10&&x<50){
		printf("yes,%d is between 10 and 50",x);
	}
	else{
		printf("%d is not between 10 and 50",x);
	}
	return 0;
}
