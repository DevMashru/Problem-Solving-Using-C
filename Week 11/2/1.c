#include<stdio.h>
#include "Details.h"
int main()
{
	d a[100];
	int l;
	printf("Enter the number of students");
	scanf("%d",&l);
	read(a,l);
	avg(a,l);
	display(a,l);
}
