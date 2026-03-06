#include<stdio.h>
int main()
{
	int weight,height,BMI;
	printf("give the value");
	scanf("%d%d",&weight,&height);
	BMI=weight*height;
	if(BMI<18.5){
		printf("under weigth");
	}
	else if(BMI>=18.5&&BMI<24.9){
		printf("normal weigth");
	}
	else if(BMI>=25&&BMI<29.9){
		printf("over weigth");
	}
	else if(BMI>=30){
		printf("obesity");
	}
	return 0;
}
