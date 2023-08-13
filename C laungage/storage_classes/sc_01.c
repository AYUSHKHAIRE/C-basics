#include<stdio.h>
int myfunc(int a,int b)
{
    auto int sum;
    sum = a+b;
    return sum;
}
int main()
{
    int sum=myfunc(3,5);
    printf("%d\n",sum);
    return 0;
}
//simply means
//a variable is an auto by default