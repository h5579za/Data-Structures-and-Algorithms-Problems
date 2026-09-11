#include<stdio.h>
int main()
{
    int a,b,c,count=0;
    scanf("%d",&a);
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
        printf("%d ",c);
    }
    return 0;
}