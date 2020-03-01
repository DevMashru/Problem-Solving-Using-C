#include<stdio.h>
#include<string.h>
int concatenate(char *s,char *c,int n)
{
	char *t=c;
	while(*s)
		s++;
	for(int i=0;i<n;i++)
	{	
		c=t;
		while(*c)
		{
			*s=*c;
			c++;
			s++;
		}
	}
	*s='\0';
}
int main()
{
	char s[100],c[50];
	int l,m,n;
	printf("Enter first string");
	gets(s);
	printf("Enter second string");
	gets(c);
	printf("Enter number of times");
	scanf("%d",&n);
	concatenate(s, c, n);
	printf("Concatenated string: %s",s);
	return 0;
}

