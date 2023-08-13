#include<stdio.h>
#include<string.h>
typedef struct student
{
    int id;
    char str[20];
    int arr[2];
}
std;
int main()
{
    struct student s1,s2;
    s1.id=1;
    s2.id=2;
    printf("the id of student 1 is %d\n",s1.id);
    printf("the id of student 2 is %d\n",s2.id);
    return 0;
}