#include<stdio.h>
#include<string.h>
int main(){
	int i,len,flag=1;
	char str[30];
	gets(str);
	len=strlen(str);
	for(i=0;i<len/2;i++){
		if(str[i]!=str[len-i-1]){
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("%s,it is palindrom string\n",str);
	}
	else{
		printf("%s,it is not palindrom string",str);
	}
	return 0;
}
