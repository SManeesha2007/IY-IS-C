#include<stdio.h>
int main(){
	char ch;
	int k;
	scanf("%c%d",&ch,&k);
	if(ch>='a'&&ch<='z'){
		printf("%c",(char)(ch+k));
	}
	return 0;
}
