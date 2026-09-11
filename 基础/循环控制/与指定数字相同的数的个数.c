#include<stdio.h>
int main()
{
    int N,m,x,num=0;
    scanf("%d%d",&N,&m);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&x);
        if(x==m)
            num++;
    }
    printf("%d",num);
    return 0;
}