#include<stdio.h>
typedef struct complex
{
    float r,i;
}c;
int display(c s)
{
    if(s.i>0)
        printf(" %.2f+%.2fi\n",s.r,s.i);
    else
        printf(" %.2f%.2fi\n",s.r,s.i);
    return 0;
}
int add(c a, c b)
{
    c s;
    s.r = a.r + b.r;
    s.i = a.i + b.i;
    printf("Sum=");
    display(s);
    return 0;
}
int subtract(c a, c b)
{
    c d;
    d.r = a.r - b.r;
    d.i = a.i - b.i;
    printf("Difference=");
    display(d);
    return 0;
}
int multiply(c a,c b)
{
    c p;
    p.r = (a.r * b.r) + (a.i * b.i);
    p.i = (a.r * b.i) + (a.i * b.r);
    printf("Product=");
    display(p);
    return 0;
}
int main()
{
    c a,b;
    int o=1;
    printf("Enter the first complex number ");
    scanf(" %f %f", &a.r, &a.i);
    printf("Enter the second complex number ");
    scanf(" %f %f", &b.r, &b.i);
    printf("Enter 1 for addition\n2. for subtraction\n3. for muliplication");
    scanf("%d",&o);
    switch (o)
    {
    case 1:
        add(a,b);
        break;
    case 2:
        subtract(a,b);
        break;
    case 3:
        multiply(a,b);
        break;
    default:
        printf("Invalid option");
    }
    return 0;
}
