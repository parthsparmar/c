/* Write a program to accept a number from user and print it’s factorial in C language 
Eg: factorial of 5 is: 5! = 5 * 4 * 3 * 2 * 1=120 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,factorial=1;
	clrscr();
	printf("\ Enter Number: ");
	scanf("%d",&number);
	while(number!=0)
	{
		factorial = factorial * number--;
	}
	printf(" factorial is %d",factorial);
	getch();
}