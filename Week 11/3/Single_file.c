#include<stdio.h>
typedef struct Length
{
    int f;
    float i;
}l;
int add(l *a, l *b)
{
    l c;
    c.f=a->f+b->f;
    c.i=a->i+b->i;
    if(c.i>=12)
    {
        c.f++;
        c.i-=12;
    }
    printf("The added distance is %d feet and %f inches",c.f,c.i);
    return 0;
}
int main()
{
    l a,b;
    printf("Enter the first distance in feet and inches ");
    scanf("%d %f",&a.f,&a.i);
    printf("Enter the second distance in feets and inches ");
    scanf("%d %f",&b.f,&b.i);
    add(&a,&b);
    return 0;
}