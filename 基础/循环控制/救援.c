#include<stdio.h>
#include<math.h>
int main()
{
    int n,people;
    double x,y,distance,time,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf%lf%d",&x,&y,&people);
        distance=sqrt(x*x+y*y);
        time=distance/50*2+people*1.5;
        sum=sum+time;
    }
    int result=(int)ceil(sum);
    printf("%d",result);
    return 0;
}