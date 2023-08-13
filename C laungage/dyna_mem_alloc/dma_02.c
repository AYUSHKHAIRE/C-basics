#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    for (int i = 1; i < 4; i++)
    {
        printf("enter the value of %d for the memoey distribution\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i < 3; i++)
    {
        printf("the memory allocated for %d is %d\n", i, ptr[i]);
    }

    return 0;
}