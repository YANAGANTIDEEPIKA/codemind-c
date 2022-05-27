#include<stdio.h>
int main()
{
    int n,re=0,r,t;
    scanf("%d",&t);
    n=t;
    while(n!=0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    if(t==re)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}