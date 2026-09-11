#include<stdio.h>
int main()
{
    int a,b,c,jin=0,yin=0,tong=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&c);
            if(j==0)
                jin=jin+c;
            if(j==1)
                yin=yin+c;
            if(j==2)
                tong=tong+c;
        }
    }
    b=jin+yin+tong;
    printf("%d %d %d %d",jin,yin,tong,b);
    return 0;
}