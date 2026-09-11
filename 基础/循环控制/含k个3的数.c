#include<stdio.h>
int main()
{
    int m,k,count=0,count1=0,a,b,c;
    scanf("%d%d",&m,&k);
    a=m;
    b=m;
    while(a!=0)
    {
        a=a/10;
        count=count+1;
    }
    for(int i=0;i<count;i++)
    {
        c=b%10;
        b=b/10;
        //printf("%d",c);
        if(c==3)
        {
            count1=count1+1;
        }
    }
    if(m%19==0&&count1==k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}