#include<stdio.h>
#include<string.h>
int main()
{
    char a1[50]={0};
    //fgets(a1,sizeof(a1),stdin);
    scanf("%s",a1);
    int a=strlen(a1);
    if(a1[a-2]=='e'&&a1[a-1]=='r')
    {
        a1[a-2]='\0';
        a1[a-1]='0';
    }
    else if(a1[a-2]=='l'&&a1[a-1]=='y')
    {
        a1[a-2]='\0';
        a1[a-1]='0';
    }
    else if(a1[a-3]=='i'&&a1[a-2]=='n'&&a1[a-1]=='g')
    {
        a1[a-3]='\0';
        a1[a-2]='0';
        a1[a-1]='0';
    }
    printf("%s",a1);
}