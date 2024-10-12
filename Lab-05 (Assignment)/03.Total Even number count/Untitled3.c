//Write a Program to Count Odd and Even number.
#include<stdio.h>
int main()
{
    int inputNumber,temp,rem,Count1=0,Count2=0;
    printf("PLease Input Your Number : ");
    scanf("%d",&inputNumber);
    temp=inputNumber;
    while(temp!=0)
    {
        rem=temp%10;
        if(rem%2==0)
        {
            ++Count1;
        }
        else
        {
            ++Count2;
        }

        temp=temp/10;
    }
    printf("Even = %d \n Odd = %d",Count1,Count2);
    return 0;
}



