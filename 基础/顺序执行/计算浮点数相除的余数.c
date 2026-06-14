#include<stdio.h>
int main()
{
    double a,b,d;
    int c;
    scanf("%lf%lf",&a,&b);
    c=a/b;
    d=a-b*c;
    printf("%g",d);
    return 0;
}