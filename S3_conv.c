#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("enter temperature in fahrenheit:\n");
	scanf("%f",&fahrenheit);
	//converting celsius to fahrenheit
	celsius=(fahrenheit-32)*5/9;
	printf("%f is equal to %f\n",fahrenheit,celsius);
	getch();
	return 0;
}
