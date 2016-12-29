/* Write a program to accept a number from user and check it it is Armstrong number or not i.e. 153 = 1^3 + 5^3 + 3^3 = 153 in C language */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int index=0,copy_n,number,count=0;
	clrscr();
	printf("\n Enter Nos. : ");
	scanf("%d",&number);
	copy_n=number;
	while(copy_n!=0)
	{
		copy_n = copy_n/10;
		count++;
	}
	copy_n=number;
	while(number!=0)
	{

		index = index + pow(number % 10,count); // 3
		number = number / 10; //
	}

	if(copy_n==index)
	{
		printf("\n %d is Armstrong Number.",copy_n);
	}
	else
	{
		printf("\n %d is Not Armstrong Number.",copy_n);
	}
	getch();
}