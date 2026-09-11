#include<stdio.h>
int main()
{
    int a,b;
    double d,sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        sum=sum+b;
    }
    d=sum/a;
    printf("%.0lf %.5lf",sum,d);
    return 0;
}