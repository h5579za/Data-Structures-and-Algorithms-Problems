#include<stdio.h>
int main()
{
    int m,n,sum=0;
    scanf("%d%d",&m,&n);
    for(m;m<=n;m++)
    {
        if(m%17==0)
        {
            sum=sum+m;
        }
    }
    printf("%d",sum);
    return 0;
}