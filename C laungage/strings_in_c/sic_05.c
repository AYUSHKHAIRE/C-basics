#include<stdio.h>
int main()
{
    char str[34];
    printf("let get your name:\n");
    gets(str);
    printf("your name is %s\n",str);
    printf("using puts:\n");
    puts(str);
    return 0;
}