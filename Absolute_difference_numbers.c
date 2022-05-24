#include<stdio.h>
#include<math.h>
int count(int n)
{
    int c=0;
    while(n!=0){
        c++;
        n=n/10;
    }
    return c;
}
int last(int n,int x)
{
   int i=0,m=1,ld;
   while(i<x)
   {
       m=m*10;
       i++;
   }
   ld=n%m;
   return ld;
}
int first(int n,int x)
{
    int len,first;
    len=count(n);
    while(len!=x)
    {
        n=n/10;
        len--;
    }
    first=n;
    return n;
}
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    printf("%d",abs(first(n,x)-last(n,x)));
}