//increment operator
#include<stdio.h>
int main()
{
    int a=15,b=9,x,y;
    x = a++ + b++;
    y = ++x + ++b + a++;
    printf("a = %d \nb = %d \nx = %d \ny =%d",a,b,x,y);
    return 0;
}

