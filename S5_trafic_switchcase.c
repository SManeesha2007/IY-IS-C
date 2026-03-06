 #include<stdio.h>
 int main()
 {
 	char ch;
 	printf("give a color\n");
 	scanf("%c",&ch);
 	switch(ch){
 		case 'r':printf("stop\n");
 		break;
 		case 'y':printf("slow down\n");
 		break;
 		case 'g':printf("go\n");
 		break;
 		default :printf("give valid color\n");
	 }
	 printf("task completed");
	 return 0;
 }
