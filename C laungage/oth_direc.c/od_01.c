#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("the file is %s\n",__FILE__);
    printf("the time is %s\n",__TIME__);
    printf("the date is %s\n",__DATE__);
    printf("the line is %d\n",__LINE__);
    printf("the ANSI is %d\n",__STDC__);
    return 0;
}