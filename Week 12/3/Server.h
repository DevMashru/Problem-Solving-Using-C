typedef struct student
{
    int rollno, marks;
    char name[100];
}stu;
int read(stu **);
int sort(stu **, int);
int display(stu **, int);