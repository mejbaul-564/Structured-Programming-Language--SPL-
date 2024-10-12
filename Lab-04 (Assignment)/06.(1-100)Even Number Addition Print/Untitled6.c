//Write a program (1-100)Even Number Addition Print.
#include<stdio.h>
int main()
{
    int i,out=0;
    for(i=2; i<=100; i+=2)
    {
        out+=i;
    }
    printf(" %d",out);
    return 0;
}
