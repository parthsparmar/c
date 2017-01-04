#include<stdio.h>
#include<conio.h>

void add_new_employee();
void menu();

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
			add_new_employee();
			break;
			case 50 :
			printf("\n View Employee");
			break;
			case 51 :
			exit(0);
			break;
			case 13 :
			break;
			default:
			printf("\n Invalid Number. Please Enter Again");
		}
	}

}

void add_new_employee()
{
	int emp_id [3];
	char emp_name[50];
	float salary;
	char answer;
	printf("\n Enter Emp Id:");
	scanf("%d",emp_id);
	printf("\n Enter Employee Name:");
	scanf("%s",emp_name);
	printf("\n Enter Salary:");
	scanf("%d",salary);
	do
	{
		printf("\n Do You Want To Save [y/n] :");
		answer = getch();
		switch (answer)
		{
			case 'y':
			case 'Y':
			printf("\n Record Saved Succussfully:");
			case 'n':
			case 'N':
			menu();
			break;
			default:
			printf("\n Invalid Value. Please Enter Again");

		}
	}while(answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');
}

void view_employee()
{	int emp_id;
	printf("\n Enter Emp Id: ");
	scanf("%d",&emp_id);
	printf("\n Employee Detail:");
	printf("\n Emp id: ",*emp_id);
	printf("\n Emp Name: "*emp_name);
	printf("\n Emp salary: "*salary);
}
void main()
{
    menu();
    //add_new_employee();
    getch();
}