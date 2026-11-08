#include<stdio.h>
#include<string.h>
int main()
{
    char a1[250]={0},a2[250]={0};
    scanf("%s",a1);
    int a=strlen(a1);
    for(int i=0;i<a;i++)
    {
        if(a1[i]=='A')
            a2[i]='T';
        else if(a1[i]=='T')
            a2[i]='A';
        else if(a1[i]=='G')
            a2[i]='C';
        else if(a1[i]=='C')
            a2[i]='G';
    }
    printf("%s",a2);
}