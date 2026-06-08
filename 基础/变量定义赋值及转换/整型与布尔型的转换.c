#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a;
    bool b;
    scanf("%d",&a);
    b=a;
    a=b;
    printf("%d",b);
    return 0;
}