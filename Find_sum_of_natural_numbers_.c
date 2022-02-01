#include<stdio.h>
int main()
{
    int n=1,sum=0,a;
    scanf("%d",&a);
    while(n<=a)
    {
        if(1<=n<=1000)
        {
            sum=sum+n;
            n=n+1;
        }
    }
       printf("%d",sum); 
}