#include<stdio.h>
#include "Server.h"
int read(b *a)
{
    int i,n;
    printf("Enter the number of items ");
    scanf(" %d",&n);
    for( i=0 ; i<n ; i++)
    {
        printf("Enter the item ");
        scanf("%s",a[i].n);
        printf("Enter the quantity ");
        scanf("%d",&(a[i].q));
        printf("Enter the unit price ");
        scanf("%f",&(a[i].u));
    }
    return n;
}
int display(b *a, int n)
{
    float total=0;
    for(int i=0;i<n;i++)
    {
        a[i].t = a[i].q * a[i].u;
        printf("Item: %s\n",a[i].n);
        printf("Quantity: %d\n",a[i].q);
        printf("Unit price: %.2f\n",a[i].u);
        printf("Total amount of %s: %.2f\n",a[i].n,a[i].t);
        total+=a[i].t;
    }
    printf("Total Amount= %.2f\n",total);
    return 0;
}