#include<stdio.h>
int sum(int a[][10][10], int b[][10][10], int i, int j, int k)
{
    int x,y,z,s[10][10][10];
    for (x = 0; x < i; x++)
    {
        for(y=0; y < j; y++)
        {
            for (z = 0; z < k; z++)
            {
                s[x][y][z]=a[x][y][z]+b[x][y][z];
            }
        }
    }
    for (x = 0; x < i; x++)
    {
        for(y=0; y < j; y++)
        {
            for (z = 0; z < k; z++)
            {
                printf("%d ",s[x][y][z]);
            }
        }
        printf("\n");
    }
    return 0;
}
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