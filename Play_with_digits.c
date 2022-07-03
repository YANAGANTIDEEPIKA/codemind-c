#include<stdio.h>
int sum(int n)
{
    int c=0,r;
    while(n!=0)
    {
        r=n%10;
        c+=r;
        n/=10;
    }
    return c;
}
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     s+=sum(a[i]);
    }
    printf("%d",s);
}