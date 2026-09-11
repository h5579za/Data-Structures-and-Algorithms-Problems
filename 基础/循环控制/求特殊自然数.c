#include<stdio.h>
int main()
{
   int a,b,c,d,e,f,x,y;
   for(int i=49;i<=342;i++)
   {
      x=i;
      y=i;
      a=x%7;
      x=x/7;
      b=x%7;
      x=x/7;
      c=x%7;

      d=y%9;
      y=y/9;
      e=y%9;
      y=y/9;
      f=y%9;

      if(a==f&&b==e&&c==d)
      {
         printf("%d\n",i);
         printf("%d%d%d\n",d,e,f);
         printf("%d%d%d\n",a,b,c);
         break;
      }
      
   }
   return 0; 
}