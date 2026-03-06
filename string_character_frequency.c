#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char charactercount[26]={0};
	char str[50];
	gets(str);
	printf("given no %s\n",str);
	strupr(str);
	printf("after uppercase %s\n",str);
	for(i=0;str[i]!='\0';i++){
		charactercount[str[i]-65]++;
	}
	for(i=0;i<26;i++){
		if(charactercount[i]!=0){
			printf("%c : %d\n",(char)i+65,charactercount[i]);
		}
	}
  return 0;	
}
