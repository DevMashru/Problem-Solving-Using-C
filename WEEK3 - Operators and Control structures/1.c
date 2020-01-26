#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the 4 numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	a=a+b;
	b=a-b;
	a=a-b;
	c=c^d;
	d=c^d;
	c=c^d;
	printf("New:%d%d\t%d%d\n",a,b,c,d);
	return 0;
}
