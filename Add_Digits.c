#include<stdio.h>
int singlesum(int n)
{
   int sum=0;
    while(n>0 || sum>9)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        sum+=n%10;
        n/=10;
    }
    printf("%d",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    singlesum(n);
}