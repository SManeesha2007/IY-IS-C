#include<stdio.h>
int main(){
	int i;
	char str[30];
	int digitcount[10]={0};
	gets(str);
	for(i=0;str[i]!='\0';i++){
		digitcount[str[i]-48]++;
	}
	for(i=0;i<10;i++){
		if(digitcount[i]!=0){
			printf("%d : %d\n",i,digitcount[i]);
		}
	}
	int isFancy = 0;
	for(i = 0 ;i < 10; i++) 
	{
		if(digitcount[i]>=5)
		{
			isFancy++;
		}
	}
    if(isFancy!=0){
    	printf("yes,it is fancy number");
	}
	else {
		printf("no,it is not fancy number");
	}
}
