//increment operator
#include<stdio.h>
int main()
{
    int a=10,b=7,x,y;
    x = a++ + b+a;
    y = ++x + ++b + a++;
    printf("a = %d \nb = %d \nx = %d \ny =%d",a,b,x,y);
    return 0;
}
