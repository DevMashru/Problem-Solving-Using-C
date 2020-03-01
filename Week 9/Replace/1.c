#include<stdio.h>
#include "Replace.h"
int main()
{
    char s[100],c,a;
    printf("Enter string ");
    fgets(s,sizeof(s),stdin);
    printf("Enter the charater to be replaced and the new character ");
    scanf(" %c %c",&c,&a);
    printf("New string is :");
    replace(s,c,a);
    printf("%s",s);
    return 0;
}