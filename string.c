#include<stdio.h>
int main(){
	// complietime intialisation with declaring size
	char name[10]={'M','a','n','e','e','s','h','a','\0'};
	printf("the size of name %d\n",sizeof(name));
	printf("%s\n",name);
	// complietime intialisation without declaring size
	char ch[]={'m','a','n','u','\0'}; 
	printf("the size of ch %d\n",sizeof(ch));
	printf("%s\n",ch);
	//runtime intialization
	char naam[10];
	scanf("%s",naam);          // here we actually keep & but in string we no need to give &
	printf("%s",naam);
	return 0;
}
