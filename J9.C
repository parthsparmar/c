/* Write a program to accept a number from user and print if it is multiple of 7 i */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n Enter 1st value: ");
	scanf("%d",&a);
	if(a%7 == 0)
	{
		printf("%d a is multiple of 7");
	}
	else
	{
		printf("Entered Number is not multiple of 7");
	}
	getch();
}