#include<stdio.h>
int main()
{
    int m,n,z,a=0;
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&z);
        if(z<=m)
            m=m-z;
        else
            a=a+1;
    }
    printf("%d",a);
    return 0;
}