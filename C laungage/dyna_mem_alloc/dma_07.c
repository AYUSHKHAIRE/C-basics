#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    int n;
    printf("enter the number that you wnat to array\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 1; i < n; i++)
    {
        printf("the memory allocated for %d is %d\n", i, ptr[i]);
    }

    return 0;
}