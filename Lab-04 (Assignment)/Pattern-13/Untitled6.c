/* write a program to print this pattern
    1
    1 2
    1 2 3
*/
#include<stdio.h>
int main()
{
    int row,col;
    for(row =1; row<=3; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}
