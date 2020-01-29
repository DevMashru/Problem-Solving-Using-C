#include<stdio.h>
int main()
{
	enum weekd{sun,mon,tues,wed,thur,fri,sat};
	int i;
	printf("Enter value");
	scanf("%d",&i);
	if(i==sun || i==sat)
	printf("Weekend");
	else if (i==mon || i==tues || i==wed || i==thur || i==fri)
	printf("Weekday");
	else
	printf("Invalid option");
	return 0;
}
	
