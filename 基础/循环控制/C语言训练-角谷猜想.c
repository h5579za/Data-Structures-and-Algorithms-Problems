#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    for(int i=0;a!=1;i++)
    {
        if(a%2==0)
        {
            b=a;
            a=a/2;
            printf("%d/2=%d\n",b,a);
        }
        else
        {
            b=a;
            a=a*3+1;
            printf("%d*3+1=%d\n",b,a);
        }
    }
    return 0;
}