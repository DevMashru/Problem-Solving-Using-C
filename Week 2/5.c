#include<stdio.h>
#include<math.h>
int main()
{
	printf("Enter sides of triangle");
	float a,b,c,d,s;
	scanf("%f%f%f",&d,&b,&c);
	s=(d+b+c)/2;
	a=sqrt(s*(s-d)*(s-b)*(s-c));
	printf("Area:%f",a);
	return 0;
}
