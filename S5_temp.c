#include<stdio.h>
int main()
{
	int temp;
	printf("enter the temperature");
	scanf("%d",&temp);
	if(temp<0){
		printf("its freezing");
	}
	else if(temp>0&&temp<10){
		printf("it is very cold");
	}
	else if(temp>10&&temp<20){
		printf("it is cold");
	}
	else if(temp>20&&temp<30){
		printf("it is normal");
	}
	else if(temp>30&&temp<=40){
		printf("it is hot");
	}
	else{
		printf("it is very hot");
	}
	return 0;
}
