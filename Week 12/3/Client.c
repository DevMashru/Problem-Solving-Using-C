#include<stdlib.h>
#include "Server.h"
int main()
{
    stu *s;
    int n;
    n=read(&s);
    sort(&s,n);
    display(&s,n);
    free(s);
    return 0;
}