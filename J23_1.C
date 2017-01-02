/* Write a program to accept a number from user and print it’s factorial in C language
Eg: factorial of 5 is: 5! = 5 * 4 * 3 * 2 * 1=120 */
#include<stdio.h>
#include<conio.h>

void factorial(int number,int *fact)
{
	while(number!=0)
	{
		*fact = *fact * number--;
	}
}

int main()
{
	int number,fact=1;
	clrscr();
	printf("\n Enter Number: ");
	scanf("%d",&number);
	factorial(number,&fact);
	printf("\n factorial is : %d ",fact);
	getch();
	return 0;
}

