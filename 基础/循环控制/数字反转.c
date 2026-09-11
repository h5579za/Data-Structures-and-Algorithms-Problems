#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,count=0,flag=1;
    scanf("%d",&a);
    if(a==0)
    {
        printf("%d",a);
        return 0;
    }
    if(a<0)
    {
        a=-a;
        flag=-1;
    }
    if(a%10==0)
    {
        a=a/10;
    }
    b=a;
    while(b!=0)
    {
        b=b/10;
        count=count+1;
    }
    for(int i=0;i<count;i++)
    {
        c=a%10;
        a=a/10;
        if(flag==-1&&i==0)   
            printf("%d",-c);
        else
            printf("%d",c);
    }
    return 0;
}