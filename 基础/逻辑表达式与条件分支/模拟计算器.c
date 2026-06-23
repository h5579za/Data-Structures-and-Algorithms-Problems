#include<stdio.h>
int main()
{
    int a,b;
    char x=0;
    scanf("%d%d %c",&a,&b,&x);
    switch (x)
    {
    case '+':
        printf("%d\n",a+b);
        break;
    case '-':
        printf("%d\n",a-b);
        break;
    case '*':
        printf("%d\n",a*b);
        break;
    case '/':
        printf("%d\n",a/b);
        break;
    case '%':
        printf("%d\n",a%b);
        break;
    
    default:
        break;
    }
    return 0;
}