#include<stdio.h>
int main(){
	int age;
	scanf("%d",&age);
	if(age>=0&&age<=2){
		printf("Infact");
	}
	else if(age>=3&&age<=12){
		printf("Child");
	}
	else if(age>=13&&age<=19){
		printf("Teen");
	}
	else if(age>=20&&age<=64){
		printf("Adult");
	}
	else{
		printf("Senior");
	}
	return 0;
}
