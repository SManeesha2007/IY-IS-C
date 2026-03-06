#include<stdio.h>
int main(){
	int year;
	printf("give an year");
	scanf("%d",&year);
	if(year%4==0 || year%400==0 && year%100!=0){
		printf("%d is a leap year",year);
	}
	else{
		printf("it is not a leap year");
	}
	return 0;
}
