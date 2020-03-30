#include<stdlib.h>
#include "Server.h"
int main()
{
    int n;
    emp *e=NULL;
    n=read(&e);
    display(&e,n);
    free(e);
    return 0;
}