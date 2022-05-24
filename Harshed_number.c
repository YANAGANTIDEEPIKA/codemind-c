#include<stdio.h>
int main()
{
    int n,sum=0,t,r,re;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        sum=sum+r;
        t=t/10;
    }
if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
