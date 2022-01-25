#include<stdio.h>
int main()
{
    int n,rv=0,rm;
    scanf("%d",&n);
    while(n!=0)
    {
        rm=n%10;
        rv=rv*10+rm;
        n=n/10;
    }
    if(rv>0)
    printf("%d",rv);
    else
    printf("%d",rv);
}