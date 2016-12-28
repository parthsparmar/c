/* Write a program to accept a number from user and print if it is even or odd */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n Enter Value of a : ");
	scanf("%d",&a);
	if (a%2 == 0)
	{
		printf("\n entered value %d is even:");
	}
	else 
	{
		printf("\n entered value %d is odd:");
	}

	getch();
}