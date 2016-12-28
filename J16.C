/* Write a Program to print numbers n to 1 using Do While loop in C language */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n Enter No. of Elements: ");
	scanf("%d",&n);
	printf("\n printing numbers: ");
	i=n;
	do
	{
		printf("%d   ",i);
		i--;
		if(i == 0)
		{
			break;
		}
	}while(i<=n);
	getch();
}