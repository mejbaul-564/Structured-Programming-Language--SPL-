//write a program (1/1+1/2+1/3+1/4+..........1/100).
#include<stdio.h>
int main()
{
    double out,i;
    for(i=1; i<=100; i++)
    {
        out+=(1/i);
    }
    printf(" %.2lf ",out);
    return 0;
}
