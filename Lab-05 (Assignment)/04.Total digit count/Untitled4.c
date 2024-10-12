//Write a Program to Count Number of Digits in an Integer
#include<stdio.h>
int main()
{
    long long tem,num;
    int increment=0;
    printf("PLease Input maximum 19 Number Integer: ");
    scanf("%lld",&num);
    tem=num;
    while(tem !=0)
    {
        tem/=10;
        ++increment;
    }
    printf("Number of Digits in an Integer = %d",increment);
}

