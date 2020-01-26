#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	(a%2==0?printf("Even"):printf("Odd"));
	(b&1?printf("Odd"):printf("Even"));
	return 0;
}
