typedef struct bill
{
    unsigned int q;
    float u,t;
    char n[100];
}b;
int read(b *);
int display(b *, int);
