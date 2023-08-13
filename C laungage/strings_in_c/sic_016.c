#include <stdio.h>
#include <string.h>

#define s 100

int main()
{
    char str[s], rev[s];
    int flag;
    printf("Enter any string: ");
    gets(str);

    strcpy(rev, str);
    strrev(rev);

    flag = strcmp(str, rev);
    if (flag == 0)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is Not Palindrome.");
    }

    return 0;
}