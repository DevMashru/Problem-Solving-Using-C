#include<stdio.h>
int fib(int l)
{	
	int a[100];
	a[0]=0;
	a[1]=1;
	for (int i=2;i<l;i++)
	a[i]=a[i-1]+a[i-2];
	for (int i=0;i<l;i++)
	printf("%d ",a[i]);
}
void main()
{
	int l;
	printf("Enter limit");
	scanf("%d",&l);
	fib(l);
}
