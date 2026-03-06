#include<stdio.h>
int main()
{
	char ch;
	printf("give\n");
	scanf("%c",&ch);
	if(ch=='v'){
		printf("violet");
	}
	else if(ch=='i'){
		printf("indigo");
	}
	else if(ch=='b'){
		printf("blue");
	}
	else if(ch=='g'){
		printf("green");
	}
	else if(ch=='y'){
		printf("yellow");
	}
	else if(ch=='o'){
		printf("orange");
	}
	else if(ch=='r'){
		printf("red");
	}
	else{
		printf("give only those colours");
	}
	return 0;
}
