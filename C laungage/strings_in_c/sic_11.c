#include <stdio.h>
#define s 100
void toggleCase(char*hstr);
int main()
{
    char str[s];
    puts("Enter any string: ");
    gets(str);
    puts(str);
    toggleCase(str);
    puts(str);

    return 0;
}
void toggleCase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}