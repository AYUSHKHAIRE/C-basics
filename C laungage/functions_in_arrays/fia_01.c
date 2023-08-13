#include<stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value %d is %d\n",i,array[i]);
    }
    array[2]=1000;
    return 0;
}
int main()
{
    int arr[]={14,4,02,75};
    printf("the value AT index 3 is %d\n",arr[2]);
    func1(arr);
    printf("the value AT index 3 is %d\n",arr[2]);
    return 0;

}