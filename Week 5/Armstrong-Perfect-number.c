#include<stdio.h>
#include<math.h>
void Armstrong(int a)
{
	int i,n=a,c=0,s=0,b;
	while(n>0)
	{
		n/=10;
		c++;
	}
	n=a;
	for(i=0;i<c;i++)
	{
		b=n%10;
		n/=10;
		s+=pow(b,c);
	}
	if(s==a)
		printf("%d is an armstrong number\n",a);
	else
		printf("%d is not an armstrong number\n",a);
}
void perfect(int a)
{
	int i,s=0;
	for(i=1;i<a;i++)
	if(a%i==0 && i!=a)
		s+=i;
	if(s==a)
		printf("%d is a perfect number\n",a);
	else
		printf("%d is not a perfect number\n",a);
}
int main()
{
	int n;
	printf("Enter number for checking if its armstrong and perfect");
	scanf("%d",&n);
	Armstrong(n);
	perfect(n);
}

