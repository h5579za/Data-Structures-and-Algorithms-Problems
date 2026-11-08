#include<stdio.h>
#include<string.h>
int main()
{
    char a1[100]={0},a2[100]={0};
    fgets(a1,sizeof(a1),stdin);
    fgets(a2,sizeof(a2),stdin);
    int an=0;
    int a=strlen(a1);

    if (a > 0 && a1[a - 1] == '\n') {
        a1[a - 1] = '\0';
        a--; // 更新有效字符长度
    }

    int b=strlen(a2);
    
    if (b > 0 && a2[b - 1] == '\n') {
        a2[b - 1] = '\0';
        b--; // 更新有效字符长度
    }
    for(int i=0;i<a;i++)
    {
        if(a1[i]>=65&&a1[i]<=90)
        {
            a1[i]+=32;
        }
    }
    for(int i=0;i<b;i++)
    {
        if(a2[i]>=65&&a2[i]<=90)
        {
            a2[i]+=32;
        }
    }
    int result = strcmp(a1,a2);

    if (result == 0) {
        printf("=");
    } else if (result > 0) {
        printf(">");
    } else {
        printf("<");
    }
}