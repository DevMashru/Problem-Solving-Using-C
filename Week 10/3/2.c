#include<stdio.h>
int spiral(int a[][100],int x, int y)
{
    int i=0,j=0,fr=0,lr=x-1,fc=0,lc=y-1,k=0;
    while (k<x)
    {
        i=fr;
        j=fc;
        if(j==fc)
        {
            for ( j = fc; j < lc+1; j++)
            {
                printf("%d ",a[i][j]);
            }
            fc++;
        }
        if(i==fr)
        {
            for ( i = fr+1; i < lr+1; i++)
            {
                printf("%d ",a[i][lc]);
            }
            fr++;
        }
        if(j-1==lc)
        {
            for (j=lc-1;j >= fc-1; j--)
            {
                printf("%d ",a[lr][j]);
            }
            lc--;
        }
        if(i-1==lr)
        {
            for (i=lr-1; i >= fr; i--)
            {
                printf("%d ",a[i][fc-1]);
            }
            lr--;
        }
        k++;
    }
    return 0;
}