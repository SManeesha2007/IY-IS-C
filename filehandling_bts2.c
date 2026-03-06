#include<stdio.h>
int main(){
	FILE *fp1;
	int wc=0,lc=0,cc=0;
	fp1=fopen("BTS.txt","r");
	if(fp1==NULL){
		printf("file not found\n");
		return 1;
	}
	char ch;
	while(1){
		ch=fgetc(fp1);
		if(ch==EOF)
		break;
		printf("%c",ch);
		cc++;
		if(ch==' '||ch=='\n'){
			wc++;
		}
		if(ch=='\n'){
			lc++;
		}
	}
	printf("charactercount : %d\n",cc);
	printf("wordcount : %d\n",wc);
	printf("linecount : %d",lc);
	fclose(fp1);
	return 0;
}
