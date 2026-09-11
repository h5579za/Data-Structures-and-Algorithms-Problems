#include<stdio.h>
int main()
{
    double a,x,sum=1,m=1;
    int n;
    scanf("%lf%d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        m=m*x;
        sum=sum+m;
    }
    printf("%.2lf",sum);
    return 0;
}