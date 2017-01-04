#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int empcount=2;

typedef struct employee {
	int empId;
	float salary;
} emp;

void main() {
	emp *empinfo, *cur;
	int i;
	int n;
	clrscr();

	empinfo = calloc(1, sizeof(emp));
	if(empinfo == NULL) {
		printf("\n Failed to allocate memory for emp");
		return;
	}

	printf("\n empid %d", empinfo[0].empId);

	n=10;

	for(i=0;i<n;i++) {
		empinfo = realloc(empinfo, (i+1)*sizeof(emp));
		if(empinfo==NULL) {
			printf("unable to allocate")  ;
			exit(1);
		}
		cur = empinfo+i;
		cur->empId = i;
		cur->salary = i*2;
	}
	cur=empinfo;
	for(i=0;i<n;i++) {
	      //	printf("\n empid %d \t salary %f", (empinfo+i-1)->empId, (empinfo+i-1)->salary);
	      printf("\n empid %d \t salary %f", cur->empId, cur->salary);
	      cur++;
	}
	printf("\nsize %d", sizeof(emp));

	free(empinfo);

	getch();
}