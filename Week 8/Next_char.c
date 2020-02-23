#include<stdio.h>
int next_char()
{
	char c;
	printf("Enter the characters");
	while((c=getchar())!='\n')
		if(c!= ' ')
			putchar(c+1);
		else
			printf(" ");
		printf("\n");
	return 0;
}
int main()
{
	next_char();
	return 0;
}
