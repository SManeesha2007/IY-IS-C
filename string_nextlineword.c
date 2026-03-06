#include<stdio.h>
int main(){
	int i,j=0;
	char str[50];
	char word[20];
	printf("enter the string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
			word[j]=str[i];
			j++;
		}
		else{
			word[j]='\0';
			printf("%s\n",word);
			j=0;
		}
	}
	printf("%s",word);
	return 0;
}
