#include<stdio.h>
int main()
{
    float p;
    printf("Enter percentage");
    scanf("%f",&p);
    if(p>=70)
        printf("Grade = FCD");
    else if(p<70 && p>=60)
        printf("Grade = FC");
    else if (p<60 && p>=35)
        printf("Grade : SC");
    else
        printf("Fail");
        return 0;
}