 //covert celsius  to Fahrenheit
#include<stdio.h>
int main()
{
int celsius;
float Fahrenheit;
printf("PLs input any celsius data ");
scanf("%d",&celsius);
Fahrenheit=(float)(9*celsius)/5+32;
printf("%d celsius to %.4f Fahrenheit value",celsius,Fahrenheit);
return 0;
}
