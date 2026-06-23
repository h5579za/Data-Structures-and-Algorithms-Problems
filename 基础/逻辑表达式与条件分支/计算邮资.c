#include<stdio.h>
int main()
{
    int a,b;
    char x;
    scanf("%d %c",&a,&x);
    if(x=='y')
    {
        if(a<=1000)
        {
            printf("%d",13);
        }
        else
        {
            if((a-1000)%500==0)
            {
                b=13+((a-1000)/500)*4;
                printf("%d",b);
            }
            else
            {
                b=13+((a-1000)/500)*4+4;
                printf("%d",b);
            }    
        }
    }
    else if(x=='n')
    {
        if(a<=1000)
        {
            printf("%d",8);
        }
        else
        {
            if((a-1000)%500==0)
            {
                b=8+((a-1000)/500)*4;
                printf("%d",b);
            }
            else
            {
                b=8+((a-1000)/500)*4+4;
                printf("%d",b);
            }    
        }
    }
    return 0;
}