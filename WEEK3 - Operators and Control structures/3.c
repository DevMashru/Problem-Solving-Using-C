#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter the number and the bit to be checked");
	scanf("%d%d",&a,&b);
	c=pow(2,b-1);
	if(a&c)
	printf("Set");
	else
	printf("Not Set");
	printf("Enter position that has to be set");
	scanf("%d",&b);
	c=pow(2,b-1);
	d=a|c;
	printf("%d",d);
	printf("Enter position that has to be cleared");
	scanf("%d",&b);
	c=pow(2,b-1);
	e=a&~c;		//11001
	printf("%d",e);
	return 0;
}
