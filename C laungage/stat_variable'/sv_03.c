#include <stdio.h>
int b=34;//global variabe
int func1(int b)
{
    printf("the value of b in func1 is %d\n",b);
    return b *10;
}
int main()
{
    int b = 25;
    int val = func1(b);
    int *ptr = &val;
    printf("the value of b in main is %d\n", val);
    return 0;
}