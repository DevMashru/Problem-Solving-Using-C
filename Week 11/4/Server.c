#include<stdio.h>
#include "Server.h"
int display(c s)
{
    if(s.i>0)
        printf(" %.2f+%.2fi\n",s.r,s.i);
    else
        printf(" %.2f%.2fi\n",s.r,s.i);
    return 0;
}
int add(c a, c b)
{
    c s;
    s.r = a.r + b.r;
    s.i = a.i + b.i;
    printf("Sum=");
    display(s);
    return 0;
}
int subtract(c a, c b)
{
    c d;
    d.r = a.r - b.r;
    d.i = a.i - b.i;
    printf("Difference=");
    display(d);
    return 0;
}
int multiply(c a,c b)
{
    c p;
    p.r = (a.r * b.r) + (a.i * b.i);
    p.i = (a.r * b.i) + (a.i * b.r);
    printf("Product=");
    display(p);
    return 0;
}    