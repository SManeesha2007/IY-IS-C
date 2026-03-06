#include<stdio.h>
int main()
{
	char ch;
	printf("give color\n");
	scanf("%c",&ch);
	switch(ch){
		case 'v':
	    case 'k':
		printf("violet\n");
		break;
		case 'i':printf("indigo\n");
		break;
		case 'b':printf("blue\n");
		break;
		case 'g':printf("green\n");
		break;
		case 'y':printf("yellow\n");
		break;
		case 'o':printf("orange\n");
		break;
		case 'r':printf("red\n");
		break;
		default :printf("give a valid color\n");
	}
	printf("task completed");
	return 0;
}
