#include<stdio.h>
int reverse(int n)
{
    int re=0,rm;
    while(n)
    {
    rm=n%10;
    re=re*10+rm;
    n=n/10;
   }
return re;
}
int main()
{
    int n;
    scanf("%d",&n);
    do
    {
        n+=reverse(n);
    }while(n!=reverse(n));
    printf("%d",n);
}