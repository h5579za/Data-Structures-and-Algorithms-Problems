#include<stdio.h>
int main()
{
    unsigned char n;
    int arr[102];
    scanf("%d",&n);
    
    if(n==0)
    {
        printf("0");
        return 0;
    }
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
}