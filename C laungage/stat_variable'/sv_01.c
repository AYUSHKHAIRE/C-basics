#include<stdio.h>
int func1(int b)
{
    return b*10;
}
int main()
{
    int b = 25;
    int val = func1(b);
    int *ptr = &val;
    printf("the value is %d",func1(b));
    return 0;
}