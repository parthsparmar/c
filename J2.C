#include<stdio.h>
#include<conio.h>
void main()
{
	int roll_no, c_lan, php, html, total ,average;
	clrscr();	
	printf("\n Enter Roll Number: ");
	scanf("%d",&roll_no);
	printf("\n Enter markes of c language : ");
	scanf("%d",&c_lan);
	printf("\n Enter markes of php : ");
	scanf("%d",&php);
	printf("\n Enter markes of html : ");
	scanf("%d",&html);
	total = c_lan + php + html ;
	average = total/3 ;
	printf("\n Roll No: %d \n c language = %d \n php = %d \n html = %d ", roll_no, c_lan, php, html);
	printf("\n total = %d",total);
	printf("\n average = %d", average);
	getch();
}