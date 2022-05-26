#include<stdio.h>
int fact(int r)
{
    int i,p=1;
    for(i=1;i<=r;i++)
    {
        p=p*i;
    }
    return p;
}
int main()
{
    int n,t;
    scanf("%d",&n);
    int sum=0,r,re=0,s;
    t=n;
    while(t!=0)
    {
        r=t%10;
        s=fact(r);
        re=re+s;
        t/=10;
    }
    if(re==n)
    printf("The number %d is a strong number",n);
    else
    printf("The number %d is not a strong number",n);
}