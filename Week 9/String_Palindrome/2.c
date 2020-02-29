#include<stdio.h>
#include"Reverse.h"
int reverse(char *s,char *r)
{
	int l=0,d;
	while((*s)!='\0')
	{
		*s++;
		l++;
	}
	d=l;
	int m=0;
	s--;
	for(m=0;m<l;m++)
	{
		*r=*s;
		r++;
		s--;
	}
	return d;
}
int equality(char *s,char *r, int l)
{
	int f=1;
	for(int i=0;i<l;i++)
	{
		if(*s==*r)
		{
				s++;
				r++;
		}
		else
			f=0;
	}
	if(f)
		return 0;
	return 1;
}	