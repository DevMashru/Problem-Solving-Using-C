#include<stdio.h>
int count()
{
	char b,c;
	int s=0,a=0,e=0,i=0,u=0,o=0;
	printf("Enter the sentence");
	while((c=getchar())!='\n')
	{	
		switch(c)
		{
			case 'a':
				a++;
				break;
			case 'e':
				e++;
				break;
			case 'i':
				i++;
				break;
			case 'o':
				o++;
				break;
			case 'u':
				u++;
				break;
			case ' ':
				break;
			default:
				s++;
			}
	}
	printf("Freq of a: %d\n",a);
	printf("Freq of e: %d\n",e);
	printf("Freq of i: %d\n",i);
	printf("Freq of o: %d\n",o);
	printf("Freq of u: %d\n",u);
	printf("Number of consonants: %d\n",s);
	return 0;
}
int main()
{
	count();
	return 0;
}
