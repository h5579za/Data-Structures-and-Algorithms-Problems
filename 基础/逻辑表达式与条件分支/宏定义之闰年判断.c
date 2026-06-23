#include<stdio.h>
#define LEAP_YEAR(y)  (a%4==0&&a%100!=0||a%400==0)
int main()
{
    int a;
    scanf("%d",&a);
    if(LEAP_YEAR(y))
    {
        printf("L");
    }
    else
    {
        printf("N");
    }
    return 0;
}
