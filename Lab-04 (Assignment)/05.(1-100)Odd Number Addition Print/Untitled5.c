//Write a program (1-100)Odd Number Addition Print.
#include<stdio.h>
int main()
{
    int i,out=0;
    for(i=1; i<=100; i+=2)
    {
        out+=i;
    }
    printf("%d\t",out);
    return 0;
}
