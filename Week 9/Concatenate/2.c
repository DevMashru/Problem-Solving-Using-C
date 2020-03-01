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
	return 0;
}