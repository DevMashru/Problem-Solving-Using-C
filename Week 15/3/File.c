#include<stdio.h>
int input()
{
    char fn[100],c[255],a;
    int n;
    printf("Enter filename");
    fgets(fn,sizeof(fn),stdin);
    FILE *f=fopen(fn,"w");
    printf("Enter the number of lines");
    scanf("%d",&n);
    printf("Enter the sentences:");
    for(int i=0;i<=n;i++)
    {
        fgets(c,255,stdin);
        fflush(stdin);
        fputs(c,f);
    }
    fclose (f);
    f = fopen(fn, "r");
    printf("Contents of the file:");
    while ((a = fgetc(f)) != EOF)
        putchar(a);
    return 0;
}
int main()
{
    input();
    return 0;
}