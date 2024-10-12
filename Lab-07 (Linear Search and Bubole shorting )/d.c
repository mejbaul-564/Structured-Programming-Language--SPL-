#include<stdio.h>
int main()
{
    int array[100],i,j,array_size;
    scanf("%d",&array_size);
    for(i=0;i<array_size;i++)
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

    for(i=0;i<array_size;i++)
    {
        printf("%d ",array[i]);

    }
    //2nd Largest number
            printf("\n%d ",array[i-2]);

}
