#include<stdio.h>
int main()
{
    int r,y;
    double m;
    scanf("%d%lf%d",&r,&m,&y);
    for(int i=0;i<y;i++)
    {
        m=m+m*r*0.01;
    }
    int a=(int)m;
    printf("%d",a);
    return 0;
}