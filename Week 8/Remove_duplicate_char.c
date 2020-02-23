#include<stdio.h>
int rem()
{
	char c,a;
	printf("Enter the char");
	while((c=getchar())!='\n')
	{
		if(c!=a)
			putchar(c);
		a=c;
	}
	printf("\n");
	return 0;
}
int main()
{
	rem();
	return 0;
}
