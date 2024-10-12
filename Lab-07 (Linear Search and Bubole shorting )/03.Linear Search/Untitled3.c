//write a program to linear search.
#include<stdio.h>
int main()
{
    int array[20]= {10,71,54,64,8,41,84,54,7,454},i;
    int search_value,position=-1;
    printf("Please Input Your search value : ");
    scanf("%d",&search_value);
    for(i=0; i<10; i++)
    {
        if(search_value ==  array[i])
        {
            position=i;
            break;
        }
    }
    if(position==-1)
    {
        printf("Value Not Found");
    }
    else
    {
        printf("The position of %d is index number %d \n",search_value,position);
        printf("Note : index number start 0 \n");
    }

    return 0;
}
