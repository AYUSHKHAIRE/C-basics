#include<stdio.h>

int main()
{
    FILE*ptr=NULL;
    char str[39]="i am ayush and i am a programmer";
    /*ptr=fopen("f1_01.txt","r");
    fscanf(ptr,"%s",str);
    printf("thre content of this file has %s",str);*/
    ptr=fopen("f1_02.txt","w");
    fprintf(ptr,"%s",str);
    return 0;
}
