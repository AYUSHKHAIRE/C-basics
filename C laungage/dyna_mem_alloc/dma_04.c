#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the number that you wnat to array\n");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    for (int i = 1; i < n; i++)
    {
        printf("enter the value of %d for the memoey distribution\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        printf("the memory allocated for %d is %d\n", i, ptr[i]);
    }

    return 0;
}