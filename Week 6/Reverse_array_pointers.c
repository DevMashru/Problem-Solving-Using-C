#include<stdio.h>
void ar(int a[],int l)
{
	int *p=a;
	printf("Enter the elements");
	for (int i=0;i<l;i++)
		scanf("%d",p+i);
}
void rar(int a[],int l)
{
	int t,*p;
	for(int i=0;i<l/2;i++)
	{	
		t=*(a+i);
		*(a+i)=*(a+l-1-i);
		*(a+l-1-i)=t;
	}
}
void s(int a[],int l)
{
	printf("Array in reverse order:");
	for (int i=0;i<l;i++)
	printf("%d ",*(a+i));
}
void main()
{
	int a[100],l;
	printf("Enter the number of elements");
	scanf("%d",&l);
	ar(a,l);
	rar(a,l);
	s(a,l);
}

