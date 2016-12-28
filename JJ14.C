/* Write a Program to accept age, gender, and marital status of a driver and print if he/she is insured considering following conditions:
    1. If driver is married then he/she is insured, else not
    2. If he/she is not married, if male & age>=30 then insured else not
    3. If he/she is not married, if female & age>=25 then insured else not. */
#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	int gender;
	int marital_status;
	clrscr();
	printf("\n Enter age: ");
	scanf("%d",&age);
	printf("\nEnter Gender male or female: ");
	printf("1 for male and 0 for female:");
	scanf("%d",&gender);
	switch(gender)
	{
		case '1':
			printf("\n male");
		break;

		case '0':
			printf("\n female");
		break;
	}
	printf("\n Enter marital status: married or single: ");
	printf("1 for married and 0 for single: ");
	scanf("%d",&marital_status);
	switch (marital_status)
	{
		case '1':
		printf("\n driver is insured");
		break;

		case '0':
		printf("\n driver is not insured");
		break;
	}
	if(marital_status == 1)
	{
		printf("\n driver is insured");
	}
	else if (marital_status == 0 && gender == 1 && age >= 30)
	{
		printf("\n driver is insured");
	}
	else if(marital_status == 0 && gender == 0 && age >= 25)
	{
		printf("\n driver is insured");
	}
	else
	{
		printf("\n driver is not insured");
	}
	getch();
}