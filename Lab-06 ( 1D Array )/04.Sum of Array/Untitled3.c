//write a c program to find sum of array elements.
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
        sum+=array[i];
    }
    printf("Sum of array elements = %d ",sum);

    return 0;
}
