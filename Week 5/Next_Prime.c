#include<stdio.h>
int isprime(int a)
{
	int f=1;
	for (int i=2;i<=a/2;i++)
		if(a%i==0)
		{
			f=0;
			break;
		}
	if(!f)
		return 0;
	return a;
}
int nextprime(int a)
{
	int f=0;
	while(1)
	{
		a++;
		f=isprime(a);
		if(f)
		{
			printf("Next prime is:%d",f);
			break;
		}
	}
	return a;
}
int main()
{ 
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	nextprime(a);
	return 0;
}
	
