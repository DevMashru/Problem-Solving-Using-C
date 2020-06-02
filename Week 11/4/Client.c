#include<stdio.h>
#include "Server.h"
int main()
{
    c a,b;
    int o=1;
    printf("Enter the first complex number ");
    scanf(" %f %f", &a.r, &a.i);
    printf("Enter the second complex number ");
    scanf(" %f %f", &b.r, &b.i);
    printf("Enter 1 for addition\n2. for subtraction\n3. for muliplication");
    scanf("%d",&o);
    switch (o)
    {
    case 1:
        add(a,b);
        break;
    case 2:
        subtract(a,b);
        break;
    case 3:
        multiply(a,b);
        break;
    default:
        printf("Invalid option");
    }
    return 0;
}
