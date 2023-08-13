#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    int std;
    char name[10];
};
int main()
{
    struct student s1;
    s1.id = 28;
    s1.marks = 90;
    s1.std = 12;
    strcpy(s1.name, "ayush");

    printf("the id of student is %d\n", s1.id);
    printf("the marks of student is %d\n", s1.marks);
    printf("the standard of student is %d\n", s1.std);
    printf("the name of student is %s\n", s1.name);
    return 0;
}
