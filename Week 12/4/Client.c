#include<stdlib.h>
#include "Server.h"
int main()
{
    course *c=NULL;
    int n;
    Register(&c);
    n=Drop(&c);
    display(&c,n);
    return 0;
}