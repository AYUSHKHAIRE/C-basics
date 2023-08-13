#include<stdio.h>

int main()
{
    FILE*ptr=NULL;
    char str[3];
    ptr=fopen("f1_01.txt","r");
    fscanf(ptr,"%s",str);
    printf("thre content of this file has %s",str);
    return 0;
}
