#include<stdio.h>
int main()
{
    double a,b,sum=0;
    for(int i=0;i<12;i++)
    {
        scanf("%lf",&a);
        sum=sum+a;
    }
    b=sum/12;
    printf("$%.2lf",b);
    return 0;
}