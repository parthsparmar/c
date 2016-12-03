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
	if (a > b)
	{
		printf("\n a is largest value %d : ",a);
	}
	else
	{
		printf("\n b is largest value %d : ",b);
	}
	getch();
}