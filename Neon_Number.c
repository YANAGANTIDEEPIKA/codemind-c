#include<stdio.h>
int main()
{
    int n,re,sum=0,sq;
    scanf("%d",&n);
    sq=n*n;
    if(sq>0)
    {
        while(sq>0)
        {
            re=sq%10;
            sum=sum+re;
            sq=sq/10;
        }
        if(sum==n)
        {
            printf("Neon Number");
        }
        else{
            printf("Not Neon Number");
        }
    }
}