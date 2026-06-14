#include<stdio.h>
int main()
{
    int p,n,x,y;
    scanf("%d%d%d",&n,&x,&y);
    p=n-y/x-1;
    printf("%d",p);
    return 0;
}