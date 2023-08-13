#include <stdio.h>
int main()
{
    int a = 10;
    float b = 3.4;
    void *ptr;
    ptr = &a;
    printf("the value of a is %d\n", &*ptr);
    return 0;
    //gives error 
}