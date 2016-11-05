#include<stdio.h>
#include<conio.h>

void main()
{
	int a[30],i,j,n,s,temp,high,low,mid,found=0;
	/*
	i = index number
	j = using in loop
	n = total no of elements
	s = searched element
	temp = using swap elements
	*/
	clrscr();
	printf("\n Enter no of elements of the array: ");
	scanf("%d",&n);
	if(n>30)
	{
		printf("\n To many numbers");
		exit(0);
	}
	printf("\n Enter array alements: ");
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i)-1;j++)
		if(a[j] > a[j+1])
		{
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
	}
	printf("\n Enter element to search: ");
	{
		scanf("%d",&s);
	}
	low = 0;
	high = n-1;
	while(high>=low)
	{
		mid = (high + low) / 2;
		if(a[mid] == s)
		{
			found=1;
			break;
		}
		else if(s > a[mid])
		{
			low = (mid + 1);
		}
		else if (s < a[mid])
		{

			high = (mid - 1);
		}
	}
	if(found == 0)
	{
		printf("\n Not Found ");
	}
	else
	{
		printf("\n Found at a[%d]",mid);
	}
	getch();
}

	
	
