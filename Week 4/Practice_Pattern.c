#include<stdio.h>
int main()
{
    int k,f=0,a;
    for(int i=1;i<=5;i++)
    {   
        for(int l=0;l<=5-i;l++)
        printf(" ");
        k=i;
        a=2*i-1;
        f=0;
        for(int j=1;j<=2*i-1;j++)
        {
            //k=i;
            if(!f)
            {
                if (k<a)
                {
                    printf("%d",k);
                    k++;
                }
                if(k==a)
                {
                    f=1;
                    printf("%d",k);
                    k--;
                }
            }
            if(f&&k>=i)
            {
                printf("%d",k);
                k--;
            }
            
        }
        for(int l=0;l<=5-i;l++)
        printf(" ");
        printf("\n");
    }
    return 0;
}