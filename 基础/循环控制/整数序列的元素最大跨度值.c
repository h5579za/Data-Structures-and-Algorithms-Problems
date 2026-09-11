#include<stdio.h>
int main()
{
    int i,a,b,c,d,max=0,min=1000;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b>max)
        {
            max=b;
        }
        if(b<min)
        {
            min=b;
        }
    }
    d=max-min;
    printf("%d",d);
    return 0;
}