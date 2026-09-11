#include<stdio.h>
int main()
{
    int n,a,b,sum=0,x=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>=90&&a<=140&&b>=60&&b<=90)
        {
            sum=sum+1;
            if(sum>x)
            {
                x=sum;
            }
        }
        else
        {
            sum=0;
        }
    }
    printf("%d",x);
    return 0;
}