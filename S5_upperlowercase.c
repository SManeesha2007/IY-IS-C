#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'){
		printf("it is upper case");
	}
	if(ch>='a'&&ch<='z'){
		printf("it is lower case");
	}
	else{
		printf("it is not valid");
	}
	return 0;
}
