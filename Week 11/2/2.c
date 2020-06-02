#include<stdio.h>
#include<string.h>
#include "Details.h"
int read(d *a, int l)
{
	for(int i=0;i<l;i++)
	{
		printf("Enter name");
		scanf("%s",a->n);
		printf("Enter roll no");
		scanf("%d",&(a->r));
		printf("Enter marks in Physics, Maths, Electronics, PSWC and mech resp.");
		scanf("%f %f %f %f %f",&(a->p),&(a->m),&(a->e),&(a->c),&(a->me));
		a++;
	}
}
int avg(d *a, int l)
{
	for(int i=0;i<l;i++)
	{
		a->t=0;		
		a->t+=(a->p)+(a->m)+(a->e)+(a->c)+(a->me);
		a->av=0;		
		a->av=a->t/5;
		if(a->p < 41 || a->m < 41 || a->e < 41 || a->c < 41 || a->me < 41)
		{
			strcpy(a->re,"FAIL");
			strcpy(a->di,"F Grade");
		}
		else if((a->av)>84)
		{
			strcpy(a->re, "PASS");
			strcpy(a->di, "FCD");
		}	
		else if ((a->av)>61)
		{
			strcpy(a->re,"PASS");
			strcpy(a->di, "FC");
		}
		else if ((a->av)>49)
		{
			strcpy(a->re, "PASS");
			strcpy(a->di, "SC");
		}
		a++;
	}
	return 0;
}
int display(d *a, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Name: %s\n",a->n);
		printf("Roll Number: %d\n",a->r);
		printf("Marks in Physics: %.1f\n",a->p);
		printf("Marks in Maths: %.1f\n",a->m);
		printf("Marks in Electronics: %.1f\n",a->e);
		printf("Marks in PWSC: %.1f\n",a->c);
		printf("Marks in Mechanical: %.1f\n",a->me);
		printf("Total marks: %.1f\n",a->t);
		printf("Average marks: %.2f\n",a->av);
		printf("Result: %s\n",a->re);
		printf("Divison: %s",a->di);
		a++;
		printf("\n");
	}
}