#include<stdio.h>
#include"C:\Users\DELL\Desktop\C laungage\mainsfiles\main_01.c"
#define a 3.14
int main()
{
    int *a=functiondangling();
    printf("hi\n");
    printf("a is  %d\n",a);
    return 0;
}