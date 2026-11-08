#include<stdio.h>
int main()
{
    int i=0,count=0;
    char arr[256];
    while(i<255 && scanf("%c",&arr[i])!=EOF && arr[i]!='\n')
    {
        i++;
    }
    for(int j=0;j<i;j++)
    {
        if(arr[j]>='0'&&arr[j]<='9')
        {
            count++;
        }
    }
    printf("%d\n",count);
}