#include<stdio.h>
int main()
{
    int m,n,x,sum=0;
    scanf("%d%d",&m,&n);
    for(m;m<=n;m++)
    {
        if(m%2==1)
        {
            sum=sum+m;
        }
    }
    printf("%d",sum);
    return 0;
}