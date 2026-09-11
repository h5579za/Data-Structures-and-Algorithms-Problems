#include<stdio.h>
int main()
{
    double x,n;
    scanf("%lf%lf",&x,&n);
    for(int i=0;i<n;i++)
    {
        x=x+x*0.001;
    }
    printf("%.4lf",x);
    return 0;
}