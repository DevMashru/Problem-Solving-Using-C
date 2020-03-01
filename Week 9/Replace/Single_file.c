#include<stdio.h>
int replace(char *s, char c, char a)
{
    while(*s)
    {
        if(*s==c)
            *s=a;
            s++;
    }
    return 0;
}
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