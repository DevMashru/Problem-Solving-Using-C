#include<stdio.h>
int main()
{
    int n,s=5,f=1;
    printf("Enter the limit");
    scanf("%d",&n);
    for ( int i = 4; i < n; i++)
    {
        for ( int j = 2; j <=i/2; j++)
        {
            f=1;
            if(i%j==0)
            {
                f=0;
                break;
            }
        }
        if(f)
            s+=i;
    }
    printf("Sum= %d",s);
}