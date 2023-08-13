#include<stdio.h>
int main ()
{
    int a11,a12,a13,a31,a32,a33,a21,a22,a23;
    int detr,x1,x2,x3;
    
    printf("enter the value of a11\n");
    scanf("%d",&a11);
    printf("enter the value of a12\n");
    scanf("%d",&a12);
    printf("enter the value of a13\n");
    scanf("%d",&a13);
    printf("enter the value of a21\n");
    scanf("%d",&a21);
    printf("enter the value of a22\n");
    scanf("%d",&a22);
    printf("enter the value of a23\n");
    scanf("%d",&a23);
    printf("enter the value of a31\n");
    scanf("%d",&a31);
    printf("enter the value of a32\n");
    scanf("%d",&a32);
    printf("enter the value of a33\n");
    scanf("%d",&a33);

    printf("the given question to given to terminal be like\n");
    printf("|%d  %d  %d|\n",a11,a12,a13);
    printf("|%d  %d  %d|\n",a21,a22,a23);
    printf("|%d  %d  %d|\n",a11,a12,a13);

    printf("the determinent of the function is \n");
    x1=a11*(a22*a33-a32*a23);
    x2=a12*(a21*a33-a31*a23);
    x3=a13*(a21*a32-a31*a22);

    detr=(x1-x2+x3);
    
    printf("%d\n",detr);

    printf("done!!");

    return 0;
}
