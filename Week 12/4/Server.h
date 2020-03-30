typedef struct Course
{
    char Coursecode[10],Coursename[255];
}course;
int Register(course **);
int Drop(course **);
int display(course **, int);