#include<stdio.h>
float fact(int n)
{
	if (n==0 || n==1)
		return 1;
	return n*fact(n-1);
}
int main()
{
	int n,r;
	float c;
	printf("Enter n and r");
	scanf("%d%d",&n,&r);
	c=(fact(n))/(fact(r)*fact(n-r));
	printf("nCr=%f",c);
	return 0;
}
