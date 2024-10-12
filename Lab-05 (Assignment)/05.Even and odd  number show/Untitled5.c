//Write a Program to show even and odd Number of Digits in an Integer.
#include<stdio.h>
int main()
{
    int num,rem,sum1=0,sum2=0;
    printf("Please Input your number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        if(rem%2==0)
        {
            sum1=sum1*10+rem;
        }
        else
        {
            sum2=sum2*10+rem;
        }
        num=num/10;
    }
    printf("Even = %d \n",sum1);
    printf("Odd = %d ",sum2);
    return 0;
}
