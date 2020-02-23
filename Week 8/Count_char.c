#include<stdio.h>
int count()
{
    char ch,p;
    int c=0,f=1;
    printf("Enter the characters");
    while ((ch=getchar())!='\n')
    {
        if(ch!=p&&f)
        {
            c++;
            f=0;
        }
        else if(ch==p)
            c++;
        else if(ch!=p)
        {
            printf("%c : %d\n",ch,c);
            c=1;
        }
        p=ch;
    }
    printf("%c : %d\n",p,c);
    return 0;    
}
int main()
{
    count();
    return 0;
}