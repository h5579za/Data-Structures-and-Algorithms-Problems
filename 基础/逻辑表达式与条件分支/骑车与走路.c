#include<stdio.h>
int main()
{
    double a,b;
    int x;
    scanf("%d",&x);
    a=x/1.2;
    b=27+23+x/3;
    if(a<b)
    {
        printf("Walk");
    }
    else if(a>b)
    {
        printf("Bike");
    }
    else
    {
        printf("All");
    }
    return 0;
}