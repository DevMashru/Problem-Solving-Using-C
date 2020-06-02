#include<stdio.h>
int sort(int *a, int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if((*(a+j))>(*(a+j+1)))
            {
                t=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=t;
            }
        }
    }
}
int display(int *a, int n)
{
    printf("Sorted the array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(a+i));
    }
}
int main()
{
    int n,a[100];
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    sort(a,n);
    display(a,n);
    return 0;
}