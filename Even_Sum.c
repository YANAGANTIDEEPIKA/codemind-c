#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        sum+=a[i];
        }
    printf("%d",sum);
}