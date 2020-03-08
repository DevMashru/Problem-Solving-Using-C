#include<stdio.h>
#include "Sum.h"
int main()
{
	int a[10][10][10],b[10][10][10],i,j,k;
	printf("Enter the dimensions");
	scanf("%d %d %d",&i,&j,&k);
	printf("Enter the first matrix elements");
	for (int x=0; x<i;x++)
	{
		for(int y=0; y<j;y++)
		{
			for(int z=0; z<k;z++)
			{
				scanf("%d",&a[x][y][z]);
			}
		}
	}
	printf("Enter the second matrix elements");
	for (int x=0; x<i;x++)
	{
		for(int y=0; y<j;y++)
		{
			for(int z=0; z<k;z++)
			{
				scanf("%d",&b[x][y][z]);
			}
		}
	}
	sum(a,b,i,j,k);
	return 0;
}