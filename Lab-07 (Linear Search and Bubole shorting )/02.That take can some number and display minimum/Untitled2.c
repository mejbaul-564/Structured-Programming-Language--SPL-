//Write a program That take can some number and display minimum.
#include<stdio.h>
int main()
{
    int array[100],i,array_size,mini;
    printf("Please Input Your Array Size : ");
    scanf("%d",&array_size);
    printf("Please Input Your Array : ");

    for(i=0; i<array_size; i++)
    {
        scanf("%d",&array[i]);
    }
    //define mini
    mini=array[0];
    for(i=1; i<array_size; i++)
    {
        if(mini>array[i])
        {
            mini=array[i];
        }
    }
    printf("Minimum = %d",mini);

    return 0;
}

