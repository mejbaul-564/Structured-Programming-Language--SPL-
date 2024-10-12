//write a program Input the value of a centimeter and extract the value of kilometers, meters and centimeters from it
#include<stdio.h>
int main()
{
    int kilometer,meter,centimeter;
    printf("Please input centimeter value : ");
    scanf("%d",&centimeter);
    kilometer= centimeter/100000;
    centimeter= centimeter%100000;
    meter=centimeter/100;
    centimeter=centimeter%100;
    printf("%d kilometer %d meter %d centimeter",kilometer,meter,centimeter);
    return 0;
}
