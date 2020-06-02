#include<stdio.h>
#include "Add.h"
int main()
{
    l a,b;
    printf("Enter the first distance in feet and inches ");
    scanf("%d %f",&a.f,&a.i);
    printf("Enter the second distance in feets and inches ");
    scanf("%d %f",&b.f,&b.i);
    add(&a,&b);
    return 0;
}