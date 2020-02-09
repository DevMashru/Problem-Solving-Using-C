#include<stdio.h>
void arr(int a[],int l)
{
	printf("Array in reverse order:");
	for (int i=0;i<l;i++)
	printf("%d ",a[i]);
}
int rarr(int a[],int l)
{
	printf("Enter the elements");
	for(int i=0;i<l;i++)
	scanf("%d",&a[i]);
	
}
void rar(int a[],int l)
{
	int t;
	for(int i=0;i<l/2;i++)
	{	
		t=a[i];
		a[i]=a[l-1-i];
		a[l-1-i]=t;
	}
}
int main()
{
	int a[100],l;
	printf("Enter size of array");
	scanf("%d",&l);
	rarr(a,l);
	rar(a,l);
	arr(a,l);
	return 0;
}
