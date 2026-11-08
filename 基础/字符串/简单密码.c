#include<stdio.h>
#include<string.h>
int main()
{
    char a1[300]={0};
    fgets(a1,sizeof(a1),stdin);
    int a=strlen(a1);
    for(int i=0;i<a;i++)
    {
        if(a1[i]!=' '&&a1[i]!=',')
        {
            if(a1[i]>=65&&a1[i]<=69)
            {
                a1[i]=a1[i]+21;
            }
            else if(a1[i]>=70&&a1[i]<=90)
            {
                a1[i]=a1[i]-5;
            }
        }
    }
    printf("%s",a1);
}