#include<stdio.h>
int main()
{
    int times,x,a,b,c,d,sum=0;
    scanf("%d",&times);
    for(int i=0;i<times;i++)
    {
        scanf("%d",&x);
        a=x/1000;
        b=x/100%10;
        c=x%100/10;
        d=x%10;
        if(d-a-b-c>0)
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
}