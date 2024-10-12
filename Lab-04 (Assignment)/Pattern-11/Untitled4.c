/* write a program to print this pattern
   a
   a a
   a a a
   a a a a
   a a a a a
*/
#include<stdio.h>
int main()
{
    int row,col;
    for(row =1; row<=5; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("a ");
        }
        printf("\n");
    }
    return 0;
}
