#include<stdio.h>
int main()
{
    int a,n,dushu=0,sum=0,c;
    scanf("%d",&n);
    a=(n-2)*180;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&dushu);
        sum=sum+dushu;
    }
    c=a-sum;
    printf("%d",c);
    return 0;
}