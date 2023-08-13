#include<stdio.h>
int main()
{
    char str[5]={'A','Y','U','S','H'};
    // i will not get any error
    //but it is an invalid string

    //to make it valid
    //we have to insert \0 in last
    str[6]={'A','Y','U','S','H','\0'};
    //now it is a valid string
        return 0;
}