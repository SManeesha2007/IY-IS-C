#include<stdio.h>
void wish();         // function prototype
int main(){
	printf("Before wish......\n");
	wish();         //  function call
	printf("After wish......\n");
}
void wish(){        //  function definition (or) user-define function
	printf("Good morning\n");
}
