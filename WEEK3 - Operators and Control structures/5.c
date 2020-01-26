#include<stdio.h>
#include<stdio_ext.h>
int main()
{
	float a,b;
	char c;
	printf("Enter 2 numbers and the operation");
	//scanf("%f%f %c",&a,&b,&c);
	//OR
	scanf("%f%f",&a,&b);
	__fpurge(stdin);
	scanf("%c",&c);
	switch (c)
	{
		case '+':
			printf("%f",a+b);
			break;
		case '-':
			printf("%f",a-b);
			break;
		case '*':
			printf("%f",a*b);
			break;
		case '/':
			printf("%f",a/b);
			break;
		/*case '%':
			printf("%f",a%b);
			break;*/
		default:
			printf("Invalid option");
	}
}
