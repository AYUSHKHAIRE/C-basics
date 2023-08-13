#include<stdio.h>
int main()
{
    int marks[4];
    for (int  i = 0; i < 4; i++)
    {
        printf("enter the value of marks\n");
        scanf("%d",&marks[i]);
    }
    for (int  i = 0; i < 4; i++)
    {
        printf("the student %d hsd %d marks\n ",i, marks[i]);
    }
    return 0;
}