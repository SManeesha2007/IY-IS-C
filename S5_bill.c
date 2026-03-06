#include<stdio.h>
int main()
{
	int units;
	float amt,total,surcharge;
	printf("enter the units");
	scanf("%d",&units);
	if(units<=50){
		amt=units*0.50;
	}
	else if(units>50&&units<=150){
		amt=50*0.50+(units-50)*0.75;
	}
	else if(units>150&&units<=250){
		amt=50*0.50+100*0.75+(units-150)*1.20;
	}
	else{
		amt=50*0.50+100*0.75+100*1.20+(units-250)*1.50;
	}
	total=amt+(20*amt/100);
	printf("%f\n",amt);
	printf("%f\n",total);    
	return 0;
}
