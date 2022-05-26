#include<stdio.h>
int main()
{
    int n,i,ec=0,oc=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
     r=n%10;
     if(r%2==0)
         ec++;
     if(r%2!=0)
         oc++;
    n=n/10;
    }
    if(ec==0)
    printf("Odd");
    else if(oc==0)
    printf("Even");
    else
    printf("Mixed");
}