#include<stdio.h>
int main()
{
    double x,a,b,c,d,e;
    scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
    e=a*x*x*x+b*x*x+c*x+d;
    printf("%.7lf",e);
    return 0;
}