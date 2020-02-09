#include<stdio.h>
void e(int a[],int l, int b[])
{
	printf("Enter the elements");
	for(int i=0;i<l;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<l;i++)
		b[i]=a[i];
}
int d(int a[], int l)
{
	int d,i;
	printf("Enter the position to be deleted");
	scanf("%d",&d);
	if(d>=l)
		{
			printf("Invalid position");
			return 0;
		}
	else
		for(i=d-1;i<l;i++)
			a[i]=a[i+1];
}
void di(int a[],int b[],int l,int f)
{
	if(f)
	{	
		printf("Before deletion:");
		for (int i = 0; i < l; i++)
			printf("%d ",b[i]);
		printf("\nAfter deletion:");
		for(int i=0;i<l-1;i++)
			printf("%d ",a[i]);
	}
}
int main()
{
	int a[100],b[100],l,f=1;
	printf("Enter the length of the array");
	scanf("%d",&l);
	e(a,l,b);
	f=d(a,l);
	di(a,b,l,f);
	return 0;
}