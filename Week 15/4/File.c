#include<stdio.h>
#include<stdlib.h>
int replace(int n)
{
    FILE *f,*c;
    int l=1;
    char s[255];
    f=fopen("File.txt","r");
    c=fopen("Temp.txt","w");
    while (!feof(f))
    {
        if(l!=n)
        {
            fgets(s,sizeof(s),f);
            fputs(s,c);
            fflush(f);
        }
        else
        {
            fgets(s,255,f);
            printf("Enter new line contents: ");
            scanf("%s",s);
            fflush(stdin);
            fputs(s,c);
        }
        l++;
    }
    fclose(f);
    fclose(c);
    remove("File.txt");
    rename("Temp.txt","File.txt");
    return 0;
}
int display()
{
    FILE *f;
    char s[255];
    f=fopen("File.txt","r");
    while(!feof(f))
    {
        fgets(s,sizeof(s),f);     
        printf("%s",s);
    }
    fclose(f);
    return 0;
}
int main()
{
    int n;
    printf("Contents of original file:\n");
    display();
    printf("\nEnter line number to be replace");
    scanf("%d",&n);
    replace(n);
    printf("Contents after replacing line no %d:\n",n);
    display();
    printf("\n");
    return 0;
}