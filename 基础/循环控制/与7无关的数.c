#include<stdio.h>
int main()
{
    int n,a,b,sum=0,flag=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        flag=0;
        if(i%7==0)
            continue;
        a=i;
        while(a>0)
        {
            b=a%10;
            if(b==7)
            {
                flag=1;
                break;
            }
            a=a/10;
        }
        if(flag==0)
        {
            sum=sum+i*i;    
        }
    }
    printf("%d",sum);
    return 0;
}