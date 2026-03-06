#include<stdio.h>
float fahtocel(float fah){
	return (fah-32)*5/9;
}
float celtofah(float cel){
	return (cel*9/5)+32;
}
int main(){
	int choice;
	float temp,result;
	printf("conversion menu\n");
	printf("1.fahrenheit to celsius\n");
	printf("2.celsius to fahrenheit\n");
	scanf("%d",&choice);
	switch(choice){
		case 1: printf("give the temperature in fahrenheit");
		        scanf("%f",&temp);
		        result=fahtocel(temp);
		        printf("the temperature in celsius is %.2f",result);
		        break;
		case 2: printf("give the temperature in celsius");
		        scanf("%f",&temp);
		        result=celtofah(temp);
		        printf("the temperature in fahrenheit is %.2f",result);
		        break;
		default: printf("give a valid number");
		        break;
	}
	return 0;
}
