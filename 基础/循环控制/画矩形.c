#include<stdio.h>
int main()
{
    int a,b,d;
    char c;
    scanf("%d %d %c %d",&b,&a,&c,&d);
    char arr[b][a];
    for(int i=0;i<b;i++) 
    {
        for(int j=0;j<a;j++) 
        {
            arr[i][j]=c;
        }
    }
    if(d==1)
    {
        for(int i=0;i<b;i++) 
        {
            for(int j=0;j<a;j++) 
            {
                printf("%c",arr[i][j]);
            }
            printf("\n");
        }
    }
    else if(d==0)
    {
        for(int i=0;i<b;i++) 
        {
            for(int j=0;j<a;j++) 
            {
                if(i==0||i==b-1||j==0||j==a-1)
                    printf("%c",arr[i][j]);
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}