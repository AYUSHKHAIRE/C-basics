#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
        ;
    {
        return 1;
    }
    else
    {
        return (number * factorial(number) - 1);
    }
}
int main()
{
    int num;
    printf("enter your required number to factorial \n");
    scanf("%d", &num);
    printf("the given number is %d\n and factorial of your number i s%d\n ", num, factorial(num));
    return 0;
}