#include<stdio.h>
int num(int n)
{
    static int c=0,s=0,a;
    a=n%10;
    if(n<1)
    {
        printf("Number of digits=%d\n",c);
        printf("Sum of digits=%d\n",s);
        return 0;
    }
    c++;
    s+=a;
    return num(n/10);
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    num(n);
    return 0;
}