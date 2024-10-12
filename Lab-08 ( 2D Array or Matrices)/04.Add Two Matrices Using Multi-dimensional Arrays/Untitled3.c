//03.Write a program to Add Two Matrices Using Multi-dimensional Arrays
#include<stdio.h>
int main()
{
    int matrix_A[10][10],matrix_B[10][10],matrix_adding[10][10],row_size,col_size,i,j;
    //row,col size input
    printf("Please Input Your Matrix row : ");
    scanf("%d",&row_size);
    printf("Please Input Your Matrix column : ");
    scanf("%d",&col_size);
    //a matrix input
    printf("Please Input Your A Matrix Elements : \n");
    for(i=0; i<row_size; i++)
    {
        for(j=0; j<col_size; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&matrix_A[i][j]);
        }
        printf("\n");
    }
    //b matrix input
    printf("Please Input Your B Matrix Elements : \n");
    for(i=0; i<row_size; i++)
    {
        for(j=0; j<col_size; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&matrix_B[i][j]);
        }
        printf("\n");
    }
    //two matrix add
    printf("Add Two Matrices : \n");
    for(i=0; i<row_size; i++)
    {
        for(j=0; j<col_size; j++)
        {
            matrix_adding[i][j]=matrix_A[i][j] + matrix_B[i][j];

        }
    }
    // print add matrice
    for(i=0; i<row_size; i++)
    {
        for(j=0; j<col_size; j++)
        {
            printf(" %d ",matrix_adding[i][j]);
        }
        printf("\n");
    }

    return 0;
}



