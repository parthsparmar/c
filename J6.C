#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n Enter Value of a : ");
	scanf("%d",&a);
	if (a > 10)
	{
		printf("\n Entered number is grether than 10");
	}
	else if(a == 10)
	{
		printf("\n  Entered number is equal to 10");
	}
	else
	{
		printf("\n Entered number is less than 10");
	}

	getch();
}