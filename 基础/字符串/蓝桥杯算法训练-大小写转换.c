#include<stdio.h>
#include<string.h>
int main()
{
    char a1[30]={0};
    fgets(a1,sizeof(a1),stdin);
    int a=strlen(a1);
    for(int i=0;i<a;i++)
    {
        if(a1[i]>=97&&a1[i]<=122)
        {
            a1[i]-=32;
        }
        else if(a1[i]>=65&&a1[i]<=90)
        {
            a1[i]+=32;
        }
    }
    printf("%s",a1);
}