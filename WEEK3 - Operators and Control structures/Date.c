#include<stdio.h>
int main()
{
    int d=0,m=0,y=0,f=1;
    printf("Enter date, month and year.");
    scanf("%d %d %d",&d,&m,&y);
    if(m<1 || m>12)
    {
        printf("Month is invalid");
        f=3;
    }
    else if (y<0)
    {
        printf("Year is invalid");   
        f=3;
    }
    else
    {
        if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
        {
            if(d<31)
                d++;
            else if (d>31)
                f=0;
            else
            {
                d=1;
                m++;
            }
        }
        else if (m==4 || m==6 || m==9 || m==11)
        {
            if(d<30)
                d++;
            else if (d>30)
                f=0;
        
            else
            {
                d=1;
                m++;
            }
        }
        else if(m==12)
        {
            if(d<31)
                d++;
            else if (d>31)
                f=0;
            else
            {
                d=1;
                m=1;
                y++;
            }
        }
        if(y%400==0)
        {
            if(m==2)
            {
                if(d<29)
                    d++;
                else if(d>29)
                        f=0;
                else
                {
                    d=1;
                    m++;
                }
            }
        }
        else
        {
            if(m==2)
            {
                if(d<28)
                    d++;
                else if(d>28)
                        f=0;
                else
                {
                    d=1;
                    m++;
                }
            }
        }   
    }
    if(f==1)
        printf("Date: %d\nMonth: %d\nYear: %d",d,m,y);
    else if(f==0)
        printf("Invalid date");
    return 0;
}