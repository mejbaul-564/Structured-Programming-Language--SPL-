//Write a Program to find Prime Number or Not.
#include<stdio.h>
int main()
{
    int num,i,count=0,tem,rem;
    printf("Please input your number : ");
    scanf("%d",&num);
    tem=num;
    for(i=2; i<tem; i++)
    {
        rem=tem%i;
        if(rem == 0)
        {
            ++count;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a prime number.",tem);

    }
    else
        printf("%d is not a prime number.",tem);
}

