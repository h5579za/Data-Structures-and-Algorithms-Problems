#include<stdio.h>
int main()
{
    double e=1,n;
    double sum=0,b;
    scanf("%lf",&n);
    for(int i=1;i<=n;i++)
    {
        b=i;
        sum=1;
        while(b!=0)
        {
            sum=sum*b;
            b--;
        }
        e=e+1/sum;
    }
    printf("%.10lf",e);
    return 0;
}