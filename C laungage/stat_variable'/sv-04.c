#include<stdio.h>
int func1()
{
    int b;
    static int myvar=5;
    printf("the value of static variable is %d",myvar);
    return b=myvar;
}
int main()
{
    int b=35;
    int val = func1(b);
    int *ptr = &val;
    return 0;
}