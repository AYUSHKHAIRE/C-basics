#include<stdio.h>
int main()
{
    int marks[2][4]={{ 12, 43 , 54, 65},{32, 88, 88, 88}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d",marks[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}
