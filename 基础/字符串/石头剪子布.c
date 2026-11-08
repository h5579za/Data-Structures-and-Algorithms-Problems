#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    char a1[10]={0};
    char a2[10]={0};
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%s",a1);
        scanf("%s",a2);
        if(strcmp(a1,"Rock")==0)
        {
            if(strcmp(a2,"Scissors")==0)
                printf("Player1\n");
            else if(strcmp(a2,"Rock")==0)
                printf("Tie\n");
            else
                printf("Player2\n");
        }
        else if(strcmp(a1,"Scissors")==0)
        {
            if(strcmp(a2,"Rock")==0)
                printf("Player2\n");
            else if(strcmp(a2,"Scissors")==0)
                printf("Tie\n");
            else
                printf("Player1\n");
        }
        else if(strcmp(a1,"Paper")==0)
        {
            if(strcmp(a2,"Rock")==0)
                printf("Player1\n");
            else if(strcmp(a2,"Paper")==0)
                printf("Tie\n");
            else
                printf("Player2\n");
        }
    }
}