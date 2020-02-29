#include<stdio.h>
#include<string.h>
#include "Reverse.h"
int main()
{
	int c,l=0;
	char s[50],r[50];
	printf("Enter the string");
	fgets(s,sizeof(s),stdin);
	s[strcspn(s,"\n")] = 0;
	l=reverse(s,r);
	c=equality(s,r,l);
	if(!c)
		printf("Palindrome");
	else
		printf("Not");
	return 0;
}