#include<stdio.h>
int reverse(int n)
{
    int rev=0,re;
while(n)
{
  re=n%10;
  rev=rev*10+re;
  n=n/10;
  }
  return rev;
}
  int main()
  {
      int strtn,endn;
      scanf("%d%d",&strtn,&endn);
      int i;
      for(i=strtn;i<=endn;i++)
      {
          if(i==reverse(i))
          {
              printf("%d ",i);
          }
      }
  }
  
  