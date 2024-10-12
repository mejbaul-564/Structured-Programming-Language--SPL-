//write a program Input the value of a second and extract the value of hour, minute and second from it.
#include<stdio.h>
int main()
{
    int hour,minute,second;
    printf("Please input second value : ");
    scanf("%d",&second);
    hour= second/3600;
    second= second%3600;
    minute=second/60;
    second=second%60;
    printf("%d hour %d minute %d second",hour,minute,second);
    return 0;
}
