#include<stdio.h>
int main(){
	FILE *fp1;
	fp1=fopen("BTS.txt","r");
	if(fp1==NULL){
		printf("file is not connected\n");
		return 1;
	}
    char ch;
    while(1){
    	ch=fgetc(fp1);
    	if(ch==EOF)
    		break;
    		printf("%c",ch);
	}
	fclose(fp1);
	return 0;
}
