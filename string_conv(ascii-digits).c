#include<stdio.h>
int main(){
	int i,sum=0;
	char str[30];
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>48&&str[i]<57){             // '0'-> ascii value 48 & '9'-> ascii value 57
			sum=sum+(str[i]-48);
		}
	}
	printf("%d",sum);
	return 0;
}
