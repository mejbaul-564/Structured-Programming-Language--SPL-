/*
  Write a program If a circle is contained within a square,
  find the area of the square minus the area of the circle.
  Author:(Name:Mejbaul Haque,Batch:84th,Roll:14)
*/
#include<stdio.h>
int main()
{
    float arm,radius,area;
    printf("Please Input square height or width : ");
    scanf("%f",&arm);
    printf("Please Input circle radius : ");
    scanf("%f",&radius);
    area = (arm*arm)-(3.1416*radius*radius);
    printf("Area of (square-circle) = %.4f ",area);
    return 0;
}


