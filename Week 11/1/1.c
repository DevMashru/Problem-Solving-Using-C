#include<stdio.h>
#include "Date.h"
int main()
{
	da a,b;
	printf("Enter the first date in dd/mm/yyyy format");
	scanf("%d/%d/%d",&a.d,&a.m,&a.y);
	printf("Enter the second date in dd/mm/yyyy format");
	scanf("%d/%d/%d",&b.d,&b.m,&b.y);
	date(&a,&b);
	return 0;
}
