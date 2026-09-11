#include<stdio.h>
int main()
{
    int a;
    long long b,sum=1,sum1=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        b=i;
        sum=1;
        while(b!=0)
        {
            sum=sum*b;
            b--;
        }
        sum1=sum1+sum;
    }
    printf("%lld",sum1);
    return 0;
}