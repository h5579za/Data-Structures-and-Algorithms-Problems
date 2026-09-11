#include<stdio.h>
int main()
{
    int a,b,n,sum=0,sum1=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        n=i;
        while(n>0)
        {
            b=n%10;
            if(b==1)
                sum1++;
            n=n/10;
            sum=sum+1;
        }
    }
    printf("%d",sum1);
    return 0;
}