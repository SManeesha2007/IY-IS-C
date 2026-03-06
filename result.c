 #include<stdio.h>
int main()
{
	int eng,hin,maths,phy,che,totalmarks;
	float avg;
	scanf("%d%d%d%d%d",&eng,&hin,&maths,&phy,&che);
	totalmarks=(eng+hin+maths+phy+che);
	avg=totalmarks/5;
	printf("total marks is %d\n",totalmarks);
	printf("average id %f\n",avg);
	if(eng>40&&hin>40&&maths>40&&phy>40&&che>40){
		printf("pass\n");
	}
	else {
		printf("fail");
	}
	if(avg>=60){
		printf("GRADE A");
	}
	else if(avg>=50&&avg<60){
		printf("GRADE B"); 
	}
	else if(avg>=40&&avg<50){
		printf("GRADE C");
	}
		return 0;	
}
