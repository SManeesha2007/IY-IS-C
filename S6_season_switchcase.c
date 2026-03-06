#include<stdio.h>
int main(){
	int season;
	printf("give the number");
	scanf("%d",&season);
	switch(season){
		case 3:
		case 4:
		case 5:
			printf("summer\n");
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			printf("rainy\n");
			break;
		case 10:
		case 11:
		case 12:
		case 1:
		case 2:
			printf("winter\n");
			break;
		default :printf("give a valid number");
	}
	printf("task completed");
	return 0;
}
