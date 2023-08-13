#include<stdio.h>
#define s 100
int main()
{
    char str[s];
    puts("uppercase string :" );
    gets(str);

    for (int i = 0; str[i] != '\0' ; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i]=str[i]+32;
        }
        
    }
    puts("uppercase string:");
    puts(str);
    return 0;
}