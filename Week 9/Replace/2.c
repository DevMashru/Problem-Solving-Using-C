int replace(char *s, char c, char a)
{
    while(*s)
    {
        if(*s==c)
            *s=a;
            s++;
    }
    return 0;
}