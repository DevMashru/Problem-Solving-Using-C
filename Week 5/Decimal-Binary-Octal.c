#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void decimaltobinary(int n);
void decimaltooctal(int n);
int main()
{
    int c,n;
    printf("Enter 1 for decimal to binary\n2 for deciaml to octal\nAny other number to exit");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("Enter the number");
            scanf("%d",&n);
            decimaltobinary(n);
            break;
        case 2:
            printf("Enter the number");
            scanf("%d",&n);
            decimaltooctal(n);
            break;
        default:
            exit(0);
    }
    return 0;
}

void decimaltobinary(int n)
{
    int b=0,r,i=0;
    while (n>0)
    {
        r=n%2;
        n/=2;
        b+=r*pow(10,i);
        i++;
    }
    printf("Binary equivalent is %d\n",b);
}

void decimaltooctal(int n)
{
    int o=0,r,i=0;
    while(n>0)
    {
        r=n%8;
        n/=8;
        o+=r*pow(10,i);
        i++;
    }
    printf("Octal equivalent is %d\n",o);
}