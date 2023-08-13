#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    int count = 0;
    char a[100];
    gets(a);
    printf("the length is %d\n",strlen(a));
    for ( i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    //
    printf("without function \n");
    printf("%d",count);
    return 0;
    
}
/*
#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char text[MAX_SIZE]; /* Declares a string of size 100 */
  //  int i;
    ////int count= 0;

    /* Input a string from user */
  /// // printf("Enter any string: ");
    ///gets(text);

    /* Iterate till the last character of string */
  //  for(i=0; text[i]!='\0'; i++)
  //  {
  //      count++;
  //  }

  //  printf("Length of '%s' = %d", text, count);

  //  return 0;
//}*/