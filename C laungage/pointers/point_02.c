#include<stdio.h>
int main()
{
    int arr[]={21,47,45,8,25};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
    
    printf("adresses\n");

    printf("%d\n",&arr[0]);
    printf("%d\n",&arr[1]);
    printf("%d\n",&arr[2]);
    printf("%d\n",&arr[3]);
    printf("%d\n",&arr[4]);
    return 0;
}