typedef struct details
{
	char n[300],di[3],re[4];
	int r;
	float p,m,e,c,me,t,av;
}d;
int read(d *,int);
int avg(d *, int);
int display(d *, int);
