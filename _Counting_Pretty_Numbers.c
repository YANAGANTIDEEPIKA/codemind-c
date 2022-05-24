#include<stdio.h>
int main()
{
    int n,t,r,a,b,i,j,c;
    scanf("%d",&n);//2
    for(i=1;i<=n;i++)//1 2
    {
        c=0;
       scanf("%d %d",&a,&b);
       for(j=a;j<=b;j++)
       {
          r=j%10;
          if(r==2 || r==3 || r==9)
          {
              c++;
          }
       }
       printf("%d
",c);
    }
    
}