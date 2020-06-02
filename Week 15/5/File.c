#include<stdio.h>
int compare()
{
    FILE *f,*g;
    char a[255],b[255],c,d;
    printf("Enter the name of the first file: ");
    scanf("%s",a);
    printf("Enter the name of second file: ");
    scanf("%s",b);
    f=fopen(a,"r");
    g=fopen(b,"r");
    if(f==NULL || g==NULL)
    {
        printf("Cannot open file");
        return -1;
    }
    while ((c=fgetc(f))!=EOF && (d=fgetc(g))!=EOF)
    {
        if(c!=d)
        {
            return 1;
        }
    }
    if ((c=fgetc(f))==EOF && (d=fgetc(g))==EOF)
    {
        fclose(f);
        fclose(g);
        return 0;
    }
    fclose(f);
    fclose(g);
    return 1;
}
int main()
{
    int a;
    a=compare();
    if(a==1)
        printf("Files are not same");
    else if(a==0)
        printf("Files are same");
    printf("\n");
    return 0;
}
