#include<stdio.h>
#include<string.h>
int main()
{
    char a1[600]={0},a2[600]={0};
    double count=0;
    double x=0;
    scanf("%lf %s %s",&x,a1,a2);
    int a=strlen(a1);
    for(int i=0;i<a;i++)
    {
        if(a1[i]==a2[i])
        {
            count+=1;
        }
    }
    double y=count/a;
    if(y>=x)
        printf("yes");
    else
        printf("no");
}