/* Write a Program to accept a number and print the number in reverse order. E.g. if 1324 is the number then the output will be 4231 in C language */
#include<stdio.h>
#include<conio.h>
void main()
{
	long n,i,j=0;
	clrscr();
	printf("\n Enter Nos: ");
	scanf("%ld",&n);
	while(n!=0)
	{
		j = j * 10;
		j = j + (n%10);
		n = n / 10;
	}
	printf("\nReversed: %ld",j);
	getch();
}