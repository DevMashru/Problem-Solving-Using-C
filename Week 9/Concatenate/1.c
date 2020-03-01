#include<stdio.h>
#include<string.h>
#include "concatenate.h"
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