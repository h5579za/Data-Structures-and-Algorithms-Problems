#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    double a=1,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+1/a;
        if(a>0)
        {
            a++;
            a=-a;
        }
        else if(a<0)
        {
            a=abs(a);
            a++;
        }
        
    }
    printf("%.4lf",sum);
    return 0;
}