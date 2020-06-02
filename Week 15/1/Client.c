#include<stdio.h>
#include "Server.h"
int main()
{
    int n,a[100];
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    sort(a,n);
    display(a,n);
    return 0;
}