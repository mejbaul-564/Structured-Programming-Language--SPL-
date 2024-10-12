/*
Convert Fahrenheit to celcius.
*/
#include<stdio.h>
int main()
{
    int Fahrenheit;
    float celsius;
    printf("Please input any Fahrenheit data ");
    scanf("%d",&Fahrenheit);
    celsius=(float)((Fahrenheit-32)*5)/9;
    printf("%d Fahrenheit to %.4f celsius",Fahrenheit,celsius);
    return 0;
}
