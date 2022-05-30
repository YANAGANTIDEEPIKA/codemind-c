#include<stdio.h>
int main()
{
  long long int a[10],n,i,sum=0;
    scanf("%d
",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld
",&a[i]);
        sum+=a[i];
    }
    printf("%lld",sum);
}