/*
  Write a program area of circle.
  Author:(Name:Mejbaul Haque, Batch:84th,Roll:14)
*/
#include<stdio.h>
int main()
{
    float radius,area;
    printf("Please Input circle radius : ");
    scanf("%f",&radius);
    area = 3.1416*(radius*radius);
    printf("area of circle = %.4f ",area);
    return 0;
}
