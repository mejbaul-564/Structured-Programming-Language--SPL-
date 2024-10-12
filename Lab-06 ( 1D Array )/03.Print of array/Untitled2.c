//write a c program to input an array of numbers and display it.
#include<stdio.h>
int main()
{
    int array[50],i,array_size;
    printf("Please Input Your Array Size : ");
    scanf("%d",&array_size);
    printf("Please Input Your Array : ");
    for(i=0; i<array_size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nOutput Array : ");

    for(i=0; i<array_size; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
