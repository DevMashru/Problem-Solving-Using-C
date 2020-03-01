#include<stdio.h>
#include<string.h>
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