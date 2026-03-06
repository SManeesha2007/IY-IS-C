#include<stdio.h>
int main(){
	FILE *fp1,*fp2;
	fp1=fopen("kalki.txt","r");
	fp2=fopen("change.txt","w+");
	if(fp1==NULL||fp2==NULL){
		printf("file is not connected\n");
		return 1;
	}
	char ch;
	while(1){
		ch=fgetc(fp1);
		if(ch==EOF)
		break;
		fputc(ch,fp2);
	}
	printf("copied successfully");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
