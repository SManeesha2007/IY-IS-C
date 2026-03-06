#include<stdio.h>
int main(){
	char l,ascii;
	scanf("%c",&l);
	if(l>='a'&&l<='z'){
		ascii=l-32;                         //ascii value of 'a' is 97 and 'A' is 65 and difference is 32
		printf("%c",ascii);
	}
	else if(l>='A'&&l<='Z'){
		ascii=l+32;
		printf("%c",ascii);
	}
	return 0;
}
