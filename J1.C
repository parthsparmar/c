/* Write a program to accept two values a & b and interchange their values */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();
	printf("\n Enter Value of a: ");
	scanf("%d",&a);

	printf("\n Enter Value of b: ");
	scanf("%d",&b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\n\t a = %d",a);
	printf("\n\t b = %d",b);
	getch();
}