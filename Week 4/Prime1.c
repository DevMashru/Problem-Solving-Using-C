#include<stdio.h>
int main()
{
	int a,i,c=0;
	printf("Enter the number");
	scanf("%d",&a);
	printf("The factors are:");
	for (i=1;i<=a;i++)
	{
		if(a%i==0)
		{	
			printf("%d\n",i);
			c++;
		}
	}
	printf("Count:%d",c);
	if(c==2)
		printf("Number is prime");
	return 0;
}
