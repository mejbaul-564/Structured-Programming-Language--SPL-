//write a program Take the values of two variables where the value of variable1 is printed as variable2 and the value of variable2 is printed as variable1
#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Please input value a: ");
    scanf("%d",&a);
    printf("Please input value b: ");
    scanf("%d",&b);
    t = a; //t is temporary variable
    a = b;
    b = t;
    printf("a = %d \nb = %d",a,b);
    return 0;
}
