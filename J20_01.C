/* Write a program to accept a number from user and check it it is Armstrong number or not i.e. 153 = 1^3 + 5^3 + 3^3 = 153 in C language */
/* Write a program to accept a number from user and check it it is Armstrong number or not i.e. 153 = 1^3 + 5^3 + 3^3 = 153 in C language */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int index=0,copy_n,number,count=0,i,j;
	clrscr();
	printf("\n Enter Nos. : ");
	scanf("%d",&number);
	printf("Armstrong Numbers are: ");
	for(i=0; i<=number; i++)
	{
		count=index=0;
		copy_n=j=i;
		while(copy_n!=0)
		{
			copy_n = copy_n/10;
			count++;
		}
		copy_n=j;
		while(j!=0)
		{

			index = index + pow(j % 10,count); 
			j = j / 10;
		}

		if(copy_n==index)
		{
			printf("\n%d ",copy_n);
		}
	}
	getch();
}