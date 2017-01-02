/* Write a program to accept a number from user and print it’s factorial in C language
Eg: factorial of 5 is: 5! = 5 * 4 * 3 * 2 * 1=120 */
#include<stdio.h>
#include<conio.h>
int factorial(int number)
{
	int fact;
	if(number==0)
	{
		return 1;
	}
	fact = factorial(number - 1) * number;
	return fact;
}

void main()
{
	int number;
	int fact;
	clrscr();
	printf("\n Enter Number: ");
	scanf("%d",&number);
	fact = factorial(number);
	printf("factorial is %d",fact);
	getch();
}

