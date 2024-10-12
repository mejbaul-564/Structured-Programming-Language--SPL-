//Write a Program for Sum of the digits of a given number.
#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Please Input a Number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("%d",sum);
}
