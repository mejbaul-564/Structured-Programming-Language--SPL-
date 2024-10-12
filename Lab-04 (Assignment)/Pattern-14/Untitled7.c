/* write a program to print this pattern
    1
    2 3
    4 5 6
*/
#include<stdio.h>
int main()
{
    int row,col,increment=1;
    for(row =1; row<=3; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",increment++);
        }
        printf("\n");
    }
    return 0;
}
