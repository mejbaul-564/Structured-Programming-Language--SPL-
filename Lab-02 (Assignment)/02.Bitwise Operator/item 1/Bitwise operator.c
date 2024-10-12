//bitwise operator
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    a = 10&7;//bitwise and
    b = 10|7;//bitwise or
    c = 10^7;//bitwise XOR
    d = 10<<2;//bitwise Shift left
    e = 10>>2;//bitwise Shift right
    printf("a = %d \nb = %d \nc = %d \nd = %d \ne = %d",a,b,c,d,e);
}
