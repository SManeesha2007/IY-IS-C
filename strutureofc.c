/*Documentation section:information about the program
  Program Name:area of circle
  Author:S.Maneesha
  Formulae:area of circle=pi*r*r
  Date:3-10-2024
*/
#include<stdio.h>                           // link section
#define PI 3.14                            // definition section
float area;                               // global variable declaration section
int main()                               // main funtion section
{
float r;                                // local variable section
scanf("%f",&r);
displayarea();
area=PI*r*r;
displayarea();
return 0;	
}
void displayarea(){                   // subprogram section
	printf("area = %.2f\n",area);
}
