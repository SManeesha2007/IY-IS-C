#include<stdio.h>
int main()
{
	int x;
	printf("enter age");
	scanf("%d",&x);
	if(x>=18){
		printf("your age is %d,you can vote",x);
	}
	else{
		printf("sorry you are %d years old,you have %d years to vote",x,18-x);
	}
	return 0;
}
