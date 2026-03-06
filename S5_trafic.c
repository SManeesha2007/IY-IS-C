#include<stdio.h>
int main()
{
	char ch;
	printf("give colour\n");
	scanf("%c",&ch);
	if(ch=='r'){
		printf("stop");
	}
	else if(ch=='g'){
		printf("go");
	}
	else if(ch=='y'){
		printf("slow down");
	}
	else {
		printf("give a valid colour");
	}
	return 0;
}
