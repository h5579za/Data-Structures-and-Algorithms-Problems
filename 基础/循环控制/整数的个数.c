#include<stdio.h>
int main()
{
    int k,a,one=0,five=0,ten=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&a);
        if(a==1)
            one++;
        if(a==5)
            five++;
        if(a==10)
            ten++;
    }
        
    printf("%d\n%d\n%d",one,five,ten);
    return 0;
}