#include<stdio.h>
#include "substring.h"
void substring(char *s, int b, int e)
{
    for (int i = 0; i < b-1; i++)
        s++;
    for (int i = 0; i < e-b; i++)
    {
        printf("%c",*s);
        s++;
    }
}