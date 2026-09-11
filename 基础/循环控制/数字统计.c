#include<stdio.h>
int main()
{
    int a,b,c,d,count=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        c=i;
        while(c!=0)
        {
            if(c%10==2)
            {
                count+=1;
            }
            c=c/10;
        }
    }
    printf("%d",count);
}