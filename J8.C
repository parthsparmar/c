#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n Enter Value of a : ");
	scanf("%d",&a);
	if (a%5 == 0)
	{
		printf("\n disable by 5:");
	}
	else 
	{
		printf("\n not disable by 5:");
	}

	getch();
}