#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("PM.jpeg","rb");
	fp2=fopen("copy_PM1.jpeg","wb+");
	if(fp1==NULL || fp2==NULL)
	{
		printf("File connection failed\n");
		return 1;
	}

char buffer[1024];
unsigned int bytesRead;
while(1)
{
	bytesRead=fread(buffer,1,sizeof(buffer),fp1);
	if(bytesRead==0)
	    break;
	    printf("%s",buffer);
	    fwrite(buffer,1,sizeof(buffer),fp2);
}
  printf("Image copied successfully");
  return 0;
}
