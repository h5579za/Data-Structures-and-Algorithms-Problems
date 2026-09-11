#include<stdio.h>
int main()
{
    int i,a,b,max=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b>max)
        {
            max=b;
        }
    }
    printf("%d",max);
    return 0;
}