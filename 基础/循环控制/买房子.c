#include<stdio.h>
int main()
{
    int flag=0,n,k,m,sum=0;
    double price=200;
    scanf("%d%d",&n,&k);
    for(m=1;m<=20;m++)
    {
        sum=sum+n;
        if(sum>=price)
        {
            flag=1;
            break;
        }
        price=price+price*k*0.01;
    }
    if(flag)
        printf("%d",m);
    else
        printf("Impossible");
}