#include<stdio.h>
#include "Spiral.h"
int main()
{
    int a[100][100],x,y;
    printf("Enter the size of the matrix");
    scanf("%d %d",&x,&y);
    printf("Enter matrix elements");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf(" %d",&a[i][j]);
        }
    }
    spiral(a,x,y);
}