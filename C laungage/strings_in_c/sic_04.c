#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    char str[] = {'A', 'Y', 'U', 'S', 'H', '\0'};
    printstr(str);
    return 0;
}