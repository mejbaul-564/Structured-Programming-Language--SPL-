//01.Program to Check Even or Odd Number
#include<stdio.h>
int main()
{
    int number;
    printf("Please input your number ");
    scanf("%d",&number);
    if(number%2==0){
        printf("\n %d is a even number \n",number);
    }
    else{
        printf("\n %d is a odd number \n",number);
    }

    return 0;
}
