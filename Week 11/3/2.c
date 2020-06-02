#include<stdio.h>
#include "Add.h"
int add(l *a, l *b)
{
    l c;
    c.f=a->f+b->f;
    c.i=a->i+b->i;
    if(c.i>=12)
    {
        c.f++;
        c.i-=12;
    }
    printf("The added distance is %d feet and %.2f inches\n",c.f,c.i);
    return 0;
}
