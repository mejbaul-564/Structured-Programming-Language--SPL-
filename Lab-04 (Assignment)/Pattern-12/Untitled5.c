/* write a program to print this pattern
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/
#include<stdio.h>
int main()
{
    int row,col;
    for(row =1; row<=5; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
    return 0;
}
