/* Write a Program to print numbers 1 to n using while loop in C language */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1;
	clrscr();
	printf("\n Enter No of Elements: ");
	scanf("%d",&n);
	printf("\n printing numbers: ");
	while(i<=n)
	{
		printf("%d",i);
		printf("  ");
		i++;
	}
	getch();
}