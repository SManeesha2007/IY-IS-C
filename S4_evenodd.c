#include<stdio.h>
int main()
{
	int x;
	printf("enter");
	scanf("%d",&x);
	if(x%2==0){
		printf("yes,it is even\n");
	}
    else{
    	printf("it is odd\n");
	}
	printf("the value is %d",x);
	return 0;
}
