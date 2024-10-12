//02.Write a Program to Check  Positive and Negative number
#include<stdio.h>
int main()
{
    int number;
    printf("Please input your number ");
    scanf("%d",&number);
    if(number > 0)
    {
        printf("\n %d is a Positive number \n",number);
    }
    else
    {
        printf("\n %d is a Negative number \n",number);
    }

    return 0;
}
