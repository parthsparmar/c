/* Write a program to print sum of given first n numbers in C language */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,number,j=0;
	clrscr();
	printf("\n Enter Nos. : ");
	scanf("%d",&number);
	for(i=0; i<=number; i++)
	{
		j = j + i;
	}
	printf("Total is : %d",j);
	getch();
}

