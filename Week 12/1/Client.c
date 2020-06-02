#include<stdio.h>
#include<stdlib.h>
#include "Server.h"
int main()
{
    int *p=NULL,n;
    n=read(&p);
    printf("Array before permutation:");
    display(&p,n);
    printf("\nArray after permutation:");
    permutation(&p,n);
    display(&p,n);
    printf("\n");
    free(p);
    return 0;
}