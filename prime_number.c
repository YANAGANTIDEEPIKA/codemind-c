#include<stdio.h>
void prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++){
       if(n%i==0)
       c++;
    }
    if(c==2)
    printf("prime");
    else
    printf("not a prime");
}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
}