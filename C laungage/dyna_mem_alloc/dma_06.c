#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    printf("enter the sixe of array that you have to print\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        printf("the memory allocated for %d is %d\n", i, ptr[i]);
    }

    return 0;
}