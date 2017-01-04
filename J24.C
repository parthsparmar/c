#include<stdio.h>
#include<conio.h>

int empcount=0;
typedef struct employee
{
	int empId;
	char empName[50];
	float salary;
}emp;

emp *empinfo;

void add_new_employee();
void save_employee(int emp_id, char emp_name[], float salary);
void view_employee();
void menu();

void menu()
{
    int choise=0;
    do
    {
	choise=0;
	printf("***EMS***");
	clrscr();
	printf("\n 1 = Add New Employee");
	printf("\n 2 = View Employee");
	printf("\n 3 = Exit");
	for( ; choise <49 || choise >51; )
	{
		printf("\nEnter Choise: [1-3] ");
		choise = getch();
	}
	switch (choise)
	{
		case 49 :
		printf("\n Add New Employee");
		add_new_employee();
		break;
		case 50 :
		printf("\n View Employee");
		view_employee();
		break;
		case 51 :
		exit(0);
		break;
		case 13 :
		break;
		default:
		printf("\n Invalid Number. Please Enter Again");
	}
    }while(choise!=51);
}

void add_new_employee()
{
	int emp_id;
	char emp_name[50];
	float salary;
	char answer;
	printf("\n Enter Emp Id:");
	scanf("%d",&emp_id);
	printf("\n Enter Employee Name:");
	scanf("%s",emp_name);
	printf("\n Enter Salary:");
	scanf("%f",&salary);
	do
	{
		printf("\n Do You Want To Save [y/n] :");
		answer = getch();
	}while(answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');

	if(answer == 'y' || answer == 'Y')
	{
	      save_employee(emp_id,emp_name,salary);
	      printf("\n Record Saved Succussfully:");
	}
}

void save_employee(int emp_id, char emp_name[], float salary)
{	
	emp *current,*temp;
	
	if (empinfo == NULL)
	{
		empinfo =(emp*) calloc(1,sizeof(emp));
		if (empinfo == NULL)
		{
			printf("\n Failed to allocate memory for emp");
			return;
		}
	}
	else
	{
		temp =(emp*) realloc(empinfo,(empcount+1) *sizeof(emp));
		if (temp == NULL)
		{
			printf("\n Failed to reallocate memory for emp");
			return;
		}
		else
		{
			empinfo = temp;
		}
	}
	
	current = empinfo+empcount;
	current->empId = emp_id;
	strcpy(current->empName,emp_name);
	current->salary = salary;
	empcount++;
}

void view_employee()
{
	emp *current = empinfo;
	int i;
	printf("\n empcount:%d",empcount);
	for(i = 0;i < empcount; i++)
	{
		printf("\n emp id: %d",current->empId);
		printf("\n emp name: %s",current->empName);
		printf("\n salary: %f",current->salary);
		current++;
	}
	getch();
}
void main()
{
    menu();
    getch();
}