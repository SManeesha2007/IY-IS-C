#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c && c==a){
		printf("it is equilateral triangle");
	}
	else if((a==b && b!=c)||(a!=b && b==c)||(a!=c && c==a)){
		printf("it is isosceles triangle");
	}
	else if((a!=b && b!=c && a!=c)){
		printf("it is scalene triangle");
	}
	else{
		printf("different type");
	}
	return 0;
}
