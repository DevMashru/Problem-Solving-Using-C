#include<stdio.h>
int hailstorm(int n)
{
    if(n<1)
    return 0;
    else if(n==1)
    {
        printf("%d ",n);    
        return 0;
    }
    else if(n%2==0)
    {
        printf("%d ",n);
        return hailstorm(n/2);
    }
    printf("%d ",n);
    return hailstorm((3*n)+1);
}
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    hailstorm(n);
}