//Write a program to Sort elements of array in ascending order.
#include<stdio.h>
int main()
{
    int array[100],i,j,array_size;
    printf("Please Input Your Array Size : ");
    scanf("%d",&array_size);
    printf("Please Input Your Array : ");

    for(i=0; i<array_size; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<array_size-1; i++)
    {
        for(j=0; j<array_size-1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("Ascending order : ");
    for(i=0; i<array_size; i++)
    {
        printf("%d ",array[i]);

    }
    return 0;
}



