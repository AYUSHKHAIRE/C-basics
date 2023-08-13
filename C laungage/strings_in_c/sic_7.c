#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[100];
    char b[100];
    printf("enter a    ");
    gets(a);
    for ( i = 0; a[i] != '\0'; i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("using function\n");
    printf("string a : %s\n",a);
    printf("string b : %s\n",b);
    printf("without using function\n");
    printf("%s",strcpy(a,b));

    return 0;
    
}