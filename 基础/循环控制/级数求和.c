#include<stdio.h>
int main()
{
    int k;
    double n=0,Sn=0;
    scanf("%d",&k);
    while (Sn <= k) 
    {
        n++;         
        Sn = Sn + 1.0 / n; 
    }
    int a=(int)n;
    printf("%d",a);
    return 0;
}