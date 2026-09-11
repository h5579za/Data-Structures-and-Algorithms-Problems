#include<stdio.h>
int main()
{
    double h,c;
    double sum=0;
    scanf("%lf",&h);
    sum=h;
    h=h/2;
    for(int i=0;i<9;i++)
    {
        sum=sum+2*h;
        h=h/2;
        if(i==8)
            c=h;
    }
    printf("%g\n",sum);
    printf("%g",c);
    return 0;
}