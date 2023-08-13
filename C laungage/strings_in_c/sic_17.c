#include <stdio.h>
#include <string.h>
#define s 100

int main()
{
    char str[s], reverse[s];
    int len, i, index, ws, we;
    printf("Enter any string: ");
    gets(str);

    len = strlen(str);
    index = 0;
    ws = len - 1;
    we = len - 1;

    while (we > 0)
    {
        if (str[ws] == ' ')
        {
            i = ws + 1;
            while (i <= we)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            we = ws - 1;
        }

        ws--;
    }
    for (i = 0; i <= we; i++)
    {
        reverse[index] = str[i];
        index++;
    }
    reverse[index] = '\0';

    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s", reverse);

    return 0;
}