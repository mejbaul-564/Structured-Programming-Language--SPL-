#include<stdio.h>
int main()
{
    FILE *file_01;
    file_01 = fopen("test.txt","w");

    if(file_01==NULL)
    {
        printf("file not exist");
    }
    else
    {
        printf("file exist");
        fclose(file_01);
    }

    return 0;
}
