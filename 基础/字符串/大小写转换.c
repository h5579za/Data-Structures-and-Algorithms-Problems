#include<stdio.h>
#include<string.h>
int main()
{
    char a1[100]={0};
    while(scanf("%c",a1)!=EOF)
    {
        int a=strlen(a1);
        for(int i=0;i<a;i++)
        {
            if(a1[i]>=97&&a1[i]<=122)
            {
                a1[i]-=32;
            }
        }
        printf("%s",a1);
    }
}