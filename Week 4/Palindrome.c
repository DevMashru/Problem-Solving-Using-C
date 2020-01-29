#include<stdio.h>
int main()
{
	int a,i,b;
	printf("Enter the number");
	scanf("%d",&a);
	if(a>9999 || a<999)
		printf("Not a 4 digit number");
	else
	{
		b=a/100;
		a=a%100;
		if(b%10==a/10 && b/10==a%10)
			printf("Palindrome");
		else
			printf("Not a Palindrome");
	}
	return 0;
}
