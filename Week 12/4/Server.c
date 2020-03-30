#include<stdio.h>
#include<stdlib.h>
#include "Server.h"
int Register(course **c)
{
    int i;
    *c=(course*)malloc(6*sizeof(course));
    for(i=0;i<6;i++)    
    {    
        printf("Enter coursename");
        scanf("%s",(*c+i)->Coursename);
        printf("Enter coursecode");
        scanf("%s",(*c+i)->Coursecode);
    }
    return 0;
}
int Drop(course **c)
{
    int i,n;
    printf("Enter the number of courses you want to drop");
    scanf("%d",&n);
    *c=realloc(*c,(6-n)*sizeof(course));
    if(*c==NULL)
    {
        printf("All courses dropped");
        return 6;
    }    
    for(i=0;i<(6-n);i++)
    {    
        printf("Enter coursename");
        scanf("%s",(*c+i)->Coursename);
        printf("Enter coursecode");
        scanf("%s",(*c+i)->Coursecode);
    }
    return n;
}
int display(course **c,int n)
{
    for(int i=0;i<(6-n);i++)
    {
        printf("Course name: %s\n",(*c+i)->Coursename);
        printf("Course code: %s\n",(*c+i)->Coursecode);
    }
    return 0;
}