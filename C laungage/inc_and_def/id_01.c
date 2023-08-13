#include <stdio.h>
#define DEBUG 3.62
#ifdef DEBUG // This will return True or False
#define GT 39
#endif
int main()
{
    printf("Value of GT is %d", GT); // GT value will be printed as 39 since DEBUG was defined previously
}