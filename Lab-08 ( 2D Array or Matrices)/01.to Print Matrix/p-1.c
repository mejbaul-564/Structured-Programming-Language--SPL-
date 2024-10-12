//01.Write a C Program to Print Matrix.
#include<stdio.h>
int main()
{
    int matrix[10][10],row_size,col_size,i,j;
    printf("Please Input Your Matrix row : ");
    scanf("%d",&row_size);
    printf("Please Input Your Matrix column : ");
    scanf("%d",&col_size);
    printf("Please Input Your Matrix Elements : \n");
    for(i=0; i<row_size; i++)
    {
        for(j=0; j<col_size; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("Your output matrix :\n");
    for(i=0; i<row_size; i++)
    {
        for(j=0; j<col_size; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
