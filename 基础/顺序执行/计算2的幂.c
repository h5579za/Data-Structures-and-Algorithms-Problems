#include<stdio.h>
int main()
{
    int a,b=1;
    scanf("%d",&a);
    for(int n=0;n<a;n++)
    {
        b*=2;
    }
    printf("%d",b);
    return 0;
}