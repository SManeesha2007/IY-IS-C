#include<stdio.h>
int main(){
	int option,num1,num2;
	char choice;
	do{
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n");
	printf("Enter your choice");
	scanf("%d",&option);
	printf("enter numbers\n");
	scanf("%d%d",&num1,&num2);
	switch(option){
		case 1:printf("sum=%d\n",num1+num2);
		break;
		case 2:printf("diff=%d\n",num1-num2);
		break;
		case 3:printf("mul=%d\n",num1*num2);
		break;
		case 4:printf("div=%d\n",num1/num2);
		break;
		case 5:printf("mod=%d\n",num1%num2);
		break;
		default:printf("give a valid option\n");
	}
	fflush(stdin);
	printf("do you want to continue.....(y/n)?\n");
	scanf("%c",&choice);
}while(choice=='Y'||choice=='y');
printf("thank you");
return 0;	
}
