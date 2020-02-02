#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d=0,e=0,f=0;
    printf("Enter the coefficients of the quadratic equation");
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt((b*b)-(4*a*c));
    if(d>0)
    {
        e=(-b+d)/(2*a);
        f=(-b-d)/(2*a);
        printf("Roots are: %f and %f ",e,f);
    }
    else if(d==0)
    {
        e=(-b)/(2*a);
        printf("The root is %f",e);
    }
    else
    {
        printf("Roots are complex");
    }
    return 0;
}