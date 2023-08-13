#include <stdio.h>
int main()
{
    int a = 54;
    int *ptr = &a;
    int*ptr1=NULL;
    printf("the value of a %d\n", *ptr);
    printf("the adress of a %d\n", ptr);
    printf("the value of ptr1 %d",*ptr1);
    return 0;
}
