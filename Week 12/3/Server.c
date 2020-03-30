#include<stdio.h>
#include<stdlib.h>
#include"Server.h"
int read(stu **s)
{
    int i,n;
    printf("Enter the number of students");
    scanf("%d",&n);
    *s=(stu*)malloc(n*sizeof(stu));
    for ( i = 0; i < n; i++)
    {
        printf("Enter rollno");
        scanf("%d",&((*s+i)->rollno));
        printf("Enter name");
        scanf("%s",(*s+i)->name);
        printf("Enter marks");
        scanf("%d",&((*s+i)->marks));
    }
    return n;
}
int sort(stu **s, int n)
{
    int i;
    stu t;
    for (i = n-1; i >= 0; i--)
    {
        for(int j=0;j<i;j++)
        {
            if(((*s+j)->marks)<((*s+j+1)->marks))
            {
                t=*(*s+j);
                *(*s+j)=*(*s+j+1);
                *(*s+j+1)=t;
            }
        }
    }
    return 0;
}
int display(stu **s, int n)
{
    int i;
    printf("Sorted details\n");
    printf("Roll No.\tName\tMarks\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t%d\n",(*s+i)->rollno,(*s+i)->name,(*s+i)->marks);
    }
    return 0;    
}