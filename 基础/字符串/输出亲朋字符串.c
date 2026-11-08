#include<stdio.h>
#include<string.h>
int main()
{
    char a1[105]={0},a2[105]={0};
    int a;
    char b,c,d;
    scanf("%[^\n]",a1);
    a=strlen(a1);
    //printf("%d",a);
    for(int i=0;i<a;i++)
    {
        if(i<a-1)
            a2[i]=a1[i]+a1[i+1];
        else if(i==a-1)
            a2[i]=a1[i]+a1[0];
    }
    printf("%s\n",a2);
}