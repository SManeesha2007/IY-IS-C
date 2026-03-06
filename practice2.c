#include<stdio.h>
int main(){
	char ch;
	char word[100];
	char words[100];
	scanf("%c\n",&ch);
	scanf("%s\n",word);
	scanf("%[^\n]s",words);
	printf("%c\n",ch);
	printf("%s\n%s",word,words);
	return 0;
}
