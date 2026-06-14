#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d",&d) != EOF)
    {
        a=d/100;
        b=d/10%10;
        c=d%10;
        printf("%d%d%d\n",c,b,a);
    }
    return 0;
}