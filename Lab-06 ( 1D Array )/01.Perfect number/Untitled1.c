//Write a Program to find Perfect Number or Not.
#include<stdio.h>
int main()
{
    int num,i,sum=0,tem,rem;
    printf("Please input your number : ");
    scanf("%d",&num);
    tem=num;
    for(i=1; i<tem; i++)
    {
        rem=tem%i;
        if(rem == 0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("%d is a perfect number.",tem);

    }
    else
        printf("%d is not a perfect number. ",tem);
}
