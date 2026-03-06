#include<stdio.h>
int main(){
	int year;
	printf("enter a year\n");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0){
		printf("Yes,it is an leap year");
	}
	else{
		printf("No,it is not an leap year");
	}
	return 0;
}
