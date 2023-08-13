#include <stdio.h>
int main()
{
    int marks[2][5] = {{23, 43, 5, 65, 65}, {45, 34, 65, 34, 34}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("the value of   ROW   is %d and the value of   COLUMN   is %d \n hence the value becomes %d\n", i, j, marks[i][j]);
        }
    }
    return 0;
}