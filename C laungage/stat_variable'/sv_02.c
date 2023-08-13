#include <stdio.h>
int func1(int b)
{
    printf("the value of b for adress in func1 is %d\n", &b);
    return b * 10;
}
int main()
{
    int b = 25;
    int val = func1(b);
    int *ptr = &val;
    printf("the value is %d\n", func1(b));
    printf("the value of b for adress in main is %d\n", &b);
    return 0;
    //the actual parameters >> coppy >> formal parameters
}