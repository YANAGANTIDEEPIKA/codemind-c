#include<stdio.h>
int pallin(int n)
{
    int re=0,r;
    while(n!=0)
    {
        r=n%10;
        re=re*10+r;
        n/=10;
    }
    return re;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     printf("%d ",pallin(a[i]));
    }
}