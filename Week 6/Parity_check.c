#include<stdio.h>
#include<math.h>
int su(int a)
{
    static int s=0;
    int b;
    while(a>0)
    {
        b=a%10;
        s+=b;
        a/=10;
    }
    return s;
}
void e(int a[], int l)
{
    printf("Enter the elements");
    for (int i = 0; i < l; i++)
    scanf("%d",&a[i]);
}
int cp(int a[],int l)
{
    int c,r,b,n,s;
    for (int i = 0; i < l; i++)
    {   
        c=0;
        b=0;
        n=a[i];
        while (n>0)
        {
            r=n%2;
            n/=2;
            if(r&1)
                c++;
            b/=10;
        }
        if(c%2==0)
            s=su(a[i]);
    }
    printf("Sum=%d",s);
}
int main()
{
    int a[100],l;
    printf("Enter the number of elements");
    scanf("%d",&l);
    e(a,l);
    cp(a,l);
}