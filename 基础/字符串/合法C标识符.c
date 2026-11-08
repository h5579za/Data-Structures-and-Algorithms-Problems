#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char a1[25]={0};
    scanf("%s",a1);
    int a=strlen(a1);
    for(int i=0;i<a;i++)
    {
        if(a1[0]<'0'||a1[0]>'9')
        {
            if(a1[i]>='a'&&a1[i]<='z'
            ||a1[i]>='A'&&a1[i]<='Z'
            ||a1[i]>='0'&&a1[i]<='9'
            ||a1[i]=='_')
            {
                count+=1;
            }
        }
        else
        {
            printf("no");
            return 0;
        }
    }
    if(count==a)
        printf("yes");
    else
        printf("no");
}