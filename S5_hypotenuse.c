#include<stdio.h>
#include<math.h>
int main(){
	double x,y,z;
	printf("give value");
	scanf("%lf %lf",&x,&y);
	z=sqrt((x*x)+(y*y));
	printf("the hypotenous is %.2lf",z);
	return 0;
}
