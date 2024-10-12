//Write a Program to Check Whether a Number is Palindrome or Not
#include<stdio.h>
int main()
{
    int inputNumber,temp,rem,show=0;
    printf("PLease Input Your Number : ");
    scanf("%d",&inputNumber);
    temp=inputNumber;
    while(temp!=0)
    {
        rem=temp%10;
        show=show*10+rem;
        temp=temp/10;
    }
    if(inputNumber==show)
    {
        printf("%d is a palindrome",show);
    }
    else
        printf("%d is not palindrome",show);
    return 0;
}


