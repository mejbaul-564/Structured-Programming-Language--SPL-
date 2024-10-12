//04.Write a Program to Calculate the Grading system in School & College
#include <stdio.h>
int main()
{
    int mark;
    printf("Enter your mark ");
    scanf("%d",&mark);
    if(0>mark)
    {
        printf("Please input correct information");
    }
    else if(mark <=32)
    {
        printf("You Fail");//0-32	F	0.00
    }
    else if (mark<=39)
    {
        printf("You got  D");//33-39	D	1.00
    }
    else if(mark<=49)
    {
        printf("You got  C");//40-49	C	2.00
    }
    else if(mark<=59)
    {
        printf("You got  B");//50-59	B	3.25
    }
    else if(mark<=69)
    {
        printf("You got  A-");//60-69	A-	3.50
    }
    else if(mark<=79)
    {
        printf("You got  A");//70-79	A	4.00
    }
    else if(mark<=100)
    {
        printf("You got A+");//80-100	A+	5.00
    }
    else
    {
        printf("Please input correct information");
    }
}
