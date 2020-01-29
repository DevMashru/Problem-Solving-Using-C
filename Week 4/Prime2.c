#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter the number");
	scanf("%d",&a);
	for (i=2;i<a;i++)
		if(a%i==0)
		 	break;
	printf("Number is not prime and is divided by : %d",i);
	return 0;
} 
