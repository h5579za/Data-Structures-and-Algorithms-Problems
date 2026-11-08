#include<stdio.h>
#include<string.h>
int main()
{
    char a1[150]={0};
    int b=0;
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        scanf("%s",a1);
        int a=strlen(a1);
        for(int j=0;j<a;j++)
        {
            if(a1[0]>=97&&a1[0]<=122)
            {
                a1[0]-=32;
            }

            if(j!=0&&a1[j]>=65&&a1[j]<=90)
            {
                a1[j]+=32;
            }
        }
        printf("%s\n",a1);
    }   
}