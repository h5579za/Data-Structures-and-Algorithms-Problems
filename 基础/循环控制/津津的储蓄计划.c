#include<stdio.h>
int main()
{
    int hand=0,month=0,yusuan,shengyu=0,sum=0,saved=0;
    for(int i=0;i<12;i++)
    {
        scanf("%d",&yusuan);
        hand=hand+300;
        hand=hand-yusuan;
        if(hand<0&&month==0)
        {
              month=-(i+1);
        }
        else
        {
            if(hand>=100)
            {
                saved=saved+hand/100*100;
                hand=hand%100;
            }
        }
    }
    saved=saved*1.2;
    hand=hand+saved;
    if(month!=0)
        printf("%d",month);
    else
        printf("%d",hand);
    return 0;
}