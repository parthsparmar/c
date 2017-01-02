#include<stdio.h>
#include<conio.h>

void menu()
{
    int choise=0;
    printf("***EMS***");
    clrscr();
    printf("\n 1 = Add New Employee");
    printf("\n 2 = View Employee");
    printf("\n 3 = Exit");
	for( ; choise <49 || choise >51; )
	{
		printf("\nEnter Choise: [1-3] ");
		choise = getch();
		switch (choise)
		{
			case 49 :
			printf("\n Add New Employee");
			break;
			case 50 :
			printf("\n View Employee");
			break;
			case 51 :
			printf("\n Exit");
			break;
			case 13 :
			break;
			default:
			printf("\n Invalid Number. Please Enter Again"); 
		}
	}
		
}

void main()
{
    menu();
    getch();
}