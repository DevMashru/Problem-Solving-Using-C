typedef struct Employee
{
    char emp_id[5], department[50], name[100];
}emp;
int read(emp **);
int display(emp **, int);