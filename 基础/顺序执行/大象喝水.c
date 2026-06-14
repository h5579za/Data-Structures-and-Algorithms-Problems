#include<stdio.h>
#define pi 3.14159
int main()
{
    int h,r,b;
    double a;
    scanf("%d%d",&h,&r);
    a=pi*r*r*h;
    b=20/(a/1000)+1;
    printf("%d",b);
    return 0;
}