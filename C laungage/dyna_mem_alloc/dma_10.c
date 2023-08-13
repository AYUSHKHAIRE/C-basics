#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the number that you wnat to array\n");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 1; i < n; i++)
    {
        printf("enter the value of %d for the memoey distribution\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        printf("the memory allocated for %d is %d\n", i, ptr[i]);
    }
    // realloc
    printf("enter the number that you wnat to realloc\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 1; i < n; i++)
    {
        printf("enter the value of %d for the reallocation\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        printf("the memory reallocated for %d is %d\n", i, ptr[i]);
    }

    return 0;
}