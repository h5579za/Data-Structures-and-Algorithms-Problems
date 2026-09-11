#include<stdio.h>
int main()
{
    int n;
    double x=0,y=0;
    double a,b;
    double ja,jb;
    scanf("%d",&n);
    scanf("%lf%lf",&ja,&jb);
    x=jb/ja;
    for(int i=0;i<n-1;i++)
    {
        scanf("%lf%lf",&a,&b);
        y=b/a;
        if(y-x>0.05)
            printf("better\n");
        else if(x-y>0.05)
            printf("worse\n");
        else
            printf("same\n");
    }
    return 0;
}