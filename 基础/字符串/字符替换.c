#include<stdio.h>
#include<string.h>
int main()
{
    char a1[35]={0},a2[35]={0};
    char b1,b2;
    scanf("%s %c %c",a1,&b1,&b2);
    int a=strlen(a1);
    for(int i=0;i<a;i++)
    {
        if(a1[i]==b1)
            a1[i]=b2;
    }
    printf("%s",a1);
}