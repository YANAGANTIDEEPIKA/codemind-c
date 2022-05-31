#include<stdio.h>
int main()
{
    int n,r,j;
    scanf("%d",&n);
    j=0;
    while(n!=0)
    {
        r=n%10;
        j=j*10+r;
        n/=10;
    }
    printf("%d",j);
}