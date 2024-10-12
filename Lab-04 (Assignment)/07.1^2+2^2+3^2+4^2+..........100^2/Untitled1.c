//write a program (1^2+2^2+3^2+4^2+..........100^2).
#include<stdio.h>
int main()
{
    int i,out=0;
    for(i=1; i<=100; i++)
    {
        out+=(i*i);
    }
    printf(" %d \n",out);
    return 0;
}
