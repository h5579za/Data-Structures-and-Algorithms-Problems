#include<stdio.h>
int main()
{
    int a,b=0,c,count=0,d=1;
    scanf("%d",&a);
    c=a;
    while(c>=d)
    {
        c=c-d;
        count+=1;
        d++;
    }
    for(int i=1;i<=count;i++)
    {
        for(int j=1;j<=i;j++)
        {
            b=b+i;
        }
    }
    b+=c*d;
    printf("%d",b);
}