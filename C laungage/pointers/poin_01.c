#include<stdio.h>
int main()
{
    printf("let learn pointers\n");
    int a=76;
    int*ptra=&a;
    printf("the adress to pointer a is %p\n",&ptra);
    printf("the value of a is %d\n",*ptra);
    return 0;
}