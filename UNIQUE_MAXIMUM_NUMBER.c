#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
           if(a[i]==a[j])
           c++;
        }
        if(c==1)
        {
            if(max<a[i])
            max=a[i];
        }
    }
    if(max>0)
    printf("%d",max);
    else
    printf("-1");
}