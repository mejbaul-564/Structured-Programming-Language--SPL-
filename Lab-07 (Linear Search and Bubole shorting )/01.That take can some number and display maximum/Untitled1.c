//Write a program That take can some number and display maximum.
#include<stdio.h>
int main()
{
    int array[100],i,array_size,max;
    printf("Please Input Your Array Size : ");
    scanf("%d",&array_size);
    printf("Please Input Your Array : ");

    for(i=0; i<array_size; i++)
    {
        scanf("%d",&array[i]);
    }
    //define max
    max=array[0];
    for(i=1; i<array_size; i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    printf("Maximum = %d",max);

    return 0;
}
