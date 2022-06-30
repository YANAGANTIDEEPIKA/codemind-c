#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n],i,x,y;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(!(a[i]>=x && a[i]<=y))
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}