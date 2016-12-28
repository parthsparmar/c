/* Write a Program to print first n odd & even numbers in C language */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("\n Enter No. of Elements: ");
	scanf("%d",&n);
	printf("\nEven Numbers: ");
	for(i=0; i<=n; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d  ",i);
		}
	}
	printf("\nOdd Numbers: ");
	for(i=0; i<=n; i++)
	{
		if(i % 2 != 0)
		{
			printf("%d  "  ,i);
		}
	 }
	getch();
}