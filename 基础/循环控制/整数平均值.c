#include<stdio.h>
double Average()
{
    int a,b,sum;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        int sum=sum+b;
    }
    int c=sum/a;
    return c;
}
int main()
{
    int x=0;
    x=Average();
    printf("%d",x);
    return 0;
}