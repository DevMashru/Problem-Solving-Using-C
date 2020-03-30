#include<stdio.h>
#include<stdlib.h>
int read(int **p)
{
    int n,i;
    printf("Enter the number of elements");
    scanf("%d",&n);
    *p=(int*)malloc(n*sizeof(int));
    if(*p==NULL)
        printf("Memory not allocated");
    else
    {   
        printf("Enter the elements");
        for(i=0;i<n;++i)
        {
            scanf(" %d",(*p+i));
        }
    }
    return n;
}
int display(int **p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(*p+i));
    }
    return 0;
}
int permutation(int **p, int n)
{
    int a=**p;
    for(int i=0;i<n;i++)
    {
        *(*p+i)=*(*p+i+1);
    }
    *(*p+n-1)=a;
    return 0;
}
int main()
{
    int *p=NULL,n;
    n=read(&p);
    printf("Array before permutation:");
    display(&p,n);
    printf("Array after permutation:");
    permutation(&p,n);
    display(&p,n);
    free(p);
    return 0;
}