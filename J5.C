/* Write a program to accept a number and print if the number is Positive/Negative */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter Value of a : ");
	scanf("%d",&a);
	if (a >= 0)
	{
		printf("\n The number is positive");
	}
	else
	{
		printf("\n number is negetive");
	}
	getch();
}