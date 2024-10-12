//increment decrement combination
#include<stdio.h>
int main()
{
    int a=10,b=5,c=7,d=11,m,n;
    m= a++ - --b+ --c+d++;
    n = ++m -a;
    //printf("a = %d \nb = %d\nc = %d \nd = %d \nm = %d\n n= %d",a,b,c,d,m,n);
    printf(" A = %d \n",a);
    printf(" B = %d \n",b);
    printf(" C = %d \n",c);
    printf(" D = %d \n",d);
    printf(" M = %d \n",m);
    printf(" N = %d \n",n);

    return 0;
}

