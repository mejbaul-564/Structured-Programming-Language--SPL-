// Yes Parameter no Return
#include<stdio.h>
int area(int r)
{
    int result=0;
    result = r * r;
        printf("Area= %d",result);
}
int main()
{
    int a;
    scanf("%d",&a);
    area(a);
}
