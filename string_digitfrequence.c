#include<stdio.h>
int main(){
	int i;
	char str[30];
	int digitcount[10]={0};
	gets(str);
	for(i=0;str[i]!='\0';i++){
		digitcount[str[i]-'0']++;
	}
	for(i=0;i<10;i++){
		if(digitcount[i]!=0){
			printf("%d : %d\n",i,digitcount[i]);
		}
	}
	return 0;
}
