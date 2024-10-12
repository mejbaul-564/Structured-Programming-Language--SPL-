//write a c Program to Count of Odd Values in an Array.
#include<stdio.h>
int main()
{
    int array[50],i,array_size,count=0;
    printf("Please Input Your Array Size : ");
    scanf("%d",&array_size);
    printf("Please Input Your Array : ");
    for(i=0; i<array_size; i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0; i<array_size; i++)
    {
        if(array[i]%2!=0)
        {
            ++count;
        }
    }
    printf("Count of Odd Values = %d ",count);

    return 0;
}


