//Write a Program to Reverse a Number.
#include<stdio.h>
int main()
{
    int inputNumber,rem,show=0;
    printf("PLease Input Your Number : ");
    scanf("%d",&inputNumber);
    while(inputNumber !=0)
    {
        rem=inputNumber%10;
        show=show*10+rem;
        inputNumber=inputNumber/10;
    }
    printf("%d",show);
    return 0;
}

