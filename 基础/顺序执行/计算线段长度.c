#include<stdio.h>
#include<math.h>
int main()
{
    double Xa,Ya,Xb,Yb;
    double a;
    scanf("%lf%lf\n%lf%lf",&Xa,&Ya,&Xb,&Yb);
    a=sqrt((Yb-Ya)*(Yb-Ya)+(Xb-Xa)*(Xb-Xa));
    printf("%.3lf",a);
    return 0;
}