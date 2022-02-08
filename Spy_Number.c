#include<stdio.h>
int main()
{
    int n,sum=0,re=0,rm,pr=1;
    scanf("%d",&n);
    while(n!=0)
    {
        rm=n%10;
        re=re*10+rm;
        sum=sum+rm;
        pr=pr*rm;
        n=n/10;
    }
    if(sum==pr)
    {
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
    
}