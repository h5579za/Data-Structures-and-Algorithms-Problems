#include<stdio.h>
int main()
{
    int z,p,a1,a2,n;
    scanf("%d%d%d",&a1,&a2,&n);
    int sum=a1;
    z=a2-a1;
    for(p=0;p<n-1;p++)
    {   
        sum += z;
    }
    printf("%d",sum);
    return 0;
}