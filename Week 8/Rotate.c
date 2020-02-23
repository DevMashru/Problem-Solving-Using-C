#include<stdio.h>
int rotate()
{
	char a,c;
	int f=1;
	printf("Enter the sentence");
	while((c=getchar())!='\n')
	{
		if(f)
		{
			a=c;
			f=0;
		}
		else if(c==' ')
		{
			putchar(a);
			printf(" ");
			f=1;
		}
		else
			putchar(c);
	}
	putchar(a);
	return 0;
}
int main()
{
	rotate();
	printf("\n");
	return 0;
}
