#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c=b/a;
    printf("%.3lf%%",c*100);
    return 0;
}