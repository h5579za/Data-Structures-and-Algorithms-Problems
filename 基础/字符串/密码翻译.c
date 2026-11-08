#include<stdio.h>
#include<string.h>
int main()
{
    char a1[100]={0};
    //scanf("%s",a1);
    fgets(a1, sizeof(a1), stdin);
    int a=strlen(a1);
    for(int i=0;i<a;i++)
    {
        if(a1[i]>='a'&&a1[i]<='y'||a1[i]>='A'&&a1[i]<='Y')
            a1[i]+=1;
        else if(a1[i]=='z')
            a1[i]='a';
        else if(a1[i]=='Z')
            a1[i]='A';
    }
    printf("%s",a1);
}