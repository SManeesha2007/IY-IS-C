#include<stdio.h>
int main()
{
	int m;
	printf("enter");
	scanf("%d",&m);
	if(m==1||m==2||m==10||m==11||m==12){
		printf("it is winter");
	}
	else if(m==3||m==4||m==5){
		printf("it is summer");
	}
	else if(m==6||m==7||m==8||m==9){
		printf("it is rainy");
	}
	else{
		printf("give a valid one");
	}
	return 0;
}
