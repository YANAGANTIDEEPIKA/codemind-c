#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
       {
        if(i!=j)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
       }
       if(c==0)
       {
           s=1;
           printf("%d ",a[i]);
       }
    }
    if(s==0)
    {
        printf("-1");
    }
}