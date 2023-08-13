#include <stdio.h>
#include<string.h>
#define z 100 

int main()
{
    int l=0;;
    char str[z], reverse[z];
    /*char *s = str;
    char *r = reverse;
    int len = 0;
    printf("Enter any string: ");
    gets(str);
    while(*(s++)) len++;
    s--;
    while(len >= 0)
    {
        *(r++) = *(--s);
        len--;
    }
    *r = '\0';

    printf("\nOriginal string = %s\n", str);
    printf("Reverse string = %s", reverse);
    */
    printf("Enter any string: ");
    gets(str);
    l=strlen(str);
    int i=0;
    char*s=str;
    char*r=reverse;
    while (str[i] != '\0')
    {
        *r++==*s--;
        s++;
        r--;
    }
    printf("%s",str[i]);
    
    return 0;
}