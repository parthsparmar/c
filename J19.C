/* Write a Program to accept a number and print sum of it’s digits in C language. e.g. Entered number: 8463, output should be: 21 */
#include<stdio.h>
#include<conio.h>
void main()
{
	long i=0,n;
	clrscr();
	printf("\n Enter Nos. : ");
	scanf("%ld",&n);
	while(n!=0)
	{
		i = i + (n % 10);
		n = n / 10;
	}
	printf(" Sum is %ld",i);
	getch();
}