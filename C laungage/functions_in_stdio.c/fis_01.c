#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]={"ayush"};
    char s2[]={"khaire"};
    char s3[54];

    printf("the length of s1 is %d\n",strlen(s1));
    printf("the length of s2 is %d\n",strlen(s2));
    printf("the reverse of s1 is\n ");
    puts(strrev(s1));
    printf("the reverse of s2 is\n");
    puts(strrev(s2));
    puts(strcat(s1,s2));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    

    return 0;
}