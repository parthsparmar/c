#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter Value of a : ");
	scanf("%d",&a);
	printf("\n Enter Value of b : ");
	scanf("%d",&b);
	if (a < b)
	{
		printf("\n b is greater ");
	}
	else if (a > b)
	{
		printf("\n a is greater ");
	}
	else
	{
		printf("\n equal ");
	}
	

	getch();
}