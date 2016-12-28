/* Write a program to accept three numbers from user and print them in ascending and decending order in C language */
#include<stdio.h>
#include<conio.h>
void main()
{
	int num[2];
	int n,i,j,temp;
	clrscr();
	printf("\n Enter  Numbers: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
			{
				if(num[j] > num[i])
				{
					temp=num[j];
					num[j]=num[i];
					num[i]=temp;
				}
			}
		}
	printf("\n Printing Numbers in Asending Order: ");
	for(i=0; i<n; i++)
	{
		printf("%d", num[i]);
		printf("  ");
	}
	printf("\n Printing Numbers in Desending Order: ");
	for(i=n; i>0; i--)
	{
		printf("%d", num[i-1]);
		printf("  ");
	}
	getch();
}