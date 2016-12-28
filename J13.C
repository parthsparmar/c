/* Write a program to accept roll number ,and marks for three subjects, print total marks and average, also print grade by considering following conditions Avg>=60 Grade A */
#include<stdio.h>
#include<conio.h>
void main()
{
	int roll_no,oracle,sad,c_sharp,total,average,grade;
	clrscr();
	printf("\n Enter Roll No: ");
	scanf("%d",&roll_no);
	printf("\n Enter markes of oracle: ");
	scanf("%d",&oracle);
	printf("\n Enter markes of sad: ");
	scanf("%d",&sad);
	printf("\n Enter markes of c_sharp: ");
	scanf("%d",&c_sharp);
	total = oracle + sad + c_sharp;
	average = total / 3;
	printf("\n Total Marks = %d",total);
	printf("\n Average: %d",average);
	if (average > 60)
	{
		printf("\n Grade A");
	}
	getch();
}