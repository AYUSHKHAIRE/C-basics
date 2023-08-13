#include<stdio.h>
/*function decleration of swap values*/
void swap(int*x,int*y)
{
    int temp;
    temp=*x;/*save the values at adress*/
    //temp becomes 34;
    *x=*y;/*put y into x*/
    //do the value at adress A to th value of adress B
    //hence the adress in A coppy th value in b 
    //voice versa
    //hence the value of get exchanged
    *y=temp;/*put temp into y*/
    return;
}
int main()
{
    //let A is adress of a and B is adress of  b
    int a=34,b=74;
    printf("%d and %d\n",a,b);
    swap(&a,&b);//adress
    //the value will coppy to x and y;

    printf("%d and %d\n",a,b);
    return 0 ;
}