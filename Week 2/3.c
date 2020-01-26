//WAP to read the student info such as roll number, name, semester ,section, phone number, marks, percentage, from the user and display in same order
#include<stdio.h>
int main()
{
	char r,n[200],s,sec;
	int m,pe;
	long int p;
	printf("Enter roll number, name, semester ,section, phone number, marks, percentage");
	scanf("%c %s %c %c %ld %d",&r,n,&s,&sec,&p,&m);
	scanf("%d",&pe);
	printf("%c\n%s\n%c\n%c\n%s\n%d\n%d",r,n,s,sec,p,m,pe);
	return 0;
}
