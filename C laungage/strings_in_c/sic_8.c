/**
 * C program to concatenate two strings 
 */

#include <stdio.h>
#include <string.h>
#define s 100 // Maximum string size

int main()
{
    char str1[s], str2[s];
    int i, j;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Make sure that str1 is NULL terminated
    str1[i] = '\0';

    printf("without using functons Concatenated string = %s", str1);
    printf("using function   %s ",strcat(str1,str2));     
    ṇ
    return 0;
}