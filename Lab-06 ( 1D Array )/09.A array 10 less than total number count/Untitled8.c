//write a c program to Find the sum of the smaller numbers of 10 of array elements.
#include<stdio.h>
int main()
{
    int array[50],i,array_size,sum=0;
    printf("Please Input Your Array Size : ");
    scanf("%d",&array_size);
    printf("Please Input Your Array : ");
    for(i=0; i<array_size; i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0; i<array_size; i++)
    {
        if(array[i]<10)
        {
            sum+=array[i];

        }
    }
    printf("Sum of the smaller numbers of 10 array elements = %d ",sum);

    return 0;
}

