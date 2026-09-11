#include<stdio.h>
#include<math.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            p=n/i;
            printf("%d",p);
            break;
        }
    }
}