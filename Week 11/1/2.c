#include<stdio.h>
#include<stdlib.h>
#include "Date.h"
int date(da *a, da *b)
{
	if((a->y)<0 || (b->y)<0 || (a->m)<0 || (a->m)>12 || (b->m)<0 || (b->m)>12 || (a->d)<0 || (b->d)<0 || (((a->m)==2 || (b->m)== 2) && ((a->d)>29 || (b->d)>29)))
		printf("Invalid date\n");
	else
	{
		if(a->d==b->d && a->m==b->m && a->y==b->y)
		printf("Dates are equal\n");
		else
		{
			if((a->y)>(b->y))
			{
				printf("1st date is later\n");
				exit(0);
			}
			else if((a->y)<(b->y))
			{
				printf("2nd date is later\n");
				exit(0);
			}
			if((a->m)>(b->m) && (a->y)==(b->y))
			{
				printf("1st date is later\n");
				exit(0);
			}
			else
			{
				printf("2nd date is later\n");
				exit(0);
			}
			if((a->d)>(b->d) && a->m==b->m && a->y==b->y)
			{
				printf("1st date is later\n");
				exit(0);
			}
			else
			{
				printf("2nd date is later\n");
				exit(0);
			}
		}
	}
	return 0;
}
