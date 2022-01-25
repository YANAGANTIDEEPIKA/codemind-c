#include<stdio.h>
int main()
{
    int n,re,sum=0,pr=1,d;
    scanf("%d",&n);
    while(n>0)
    {
        re=n%10;
        sum=sum+re;
        pr=pr*re;
        n=n/10;
        
    }
    d=pr-sum;
    printf("%d",d);
    return 0;
}