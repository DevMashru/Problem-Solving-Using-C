#include<stdio.h>
#include<stdlib.h>
int merge()
{
    char c;
    FILE *fp,*f,*w;
    fp=fopen("file1.txt","r");
    f=fopen("file2.txt","r");
    w=fopen("file3.txt","w");
    if(fp==NULL || f==NULL || w==NULL)
    {
        printf("Cannot open files");
        exit(0);
    }
    printf("Contents of first file:");
    while((c=fgetc(fp))!=EOF)
    {
        fputc(c,w);
        putchar(c);
    }
    printf("\n");
    printf("Contents of second file:");
    while((c=fgetc(f))!=EOF)
    {
        fputc(c,w);
        putchar(c);
    }
    fclose(fp);
    fclose(f);
    fclose(w);
    w=fopen("file3.txt","r");
    printf("Contents of third file:\n");
    while ((c=fgetc(w))!=EOF)
    {
        putchar(c);
    }
    fclose(w);
    return 0;
}
int main()
{
    merge();
    return 0;
}