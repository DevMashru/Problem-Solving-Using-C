#include<stdio.h>
#include "substring.h"
#include<string.h>
int main()
{
    char s[255];
    int b,e;
    printf("Enter the string");
    fgets(s,sizeof(s),stdin);
    printf("Enter the start and end position");
    scanf("%d %d",&b,&e);
    substring(s,b,e);
    return 0;
}