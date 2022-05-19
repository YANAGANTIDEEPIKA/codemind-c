#include<stdio.h>
void pal(int n)
{
    int t,i,re,r;
    t=n;
    re=0;
    while(n!=0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    if(t==re)
    printf("True");
    else
    printf("False");
}
int main()
{
    int T,N,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        pal(N);
        printf("
");
    }
}