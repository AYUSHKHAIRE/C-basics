#include<stdio.h>
#define s 100
int main()
{
    int w=1;
    char str[s];
    puts("enter a string");
    gets(str);
    for (int i = 0;str[i] != '\0'; i++)
    {
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            w++;
        }
    }
    puts("number of words:");
    printf("%d",w);
    
}