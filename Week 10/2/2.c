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