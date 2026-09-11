#include<stdio.h>
int main()
{
    int k,a=1,b=1,c=0;
    scanf("%d",&k);
    for(int i=0;i<k-2;i++)
    {
            c=a+b;
            a=b;
            b=c;
    }
    if(k==1||k==2)
        c=1;
    printf("%d",c);
}