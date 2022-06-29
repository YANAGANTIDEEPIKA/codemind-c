#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        int a[x];
        for(int j=0;j<x;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int k=1;k<x;k++)
        {
            if(a[k-1]>a[k])
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d",c);
        }
        else
        {
            int min=a[0],max=a[0];
            for(int l=0;l<x;l++)
            {
                if(min>a[l])
                {
                    min=a[l];
                }
                if(max<a[l])
                {
                    max=a[l];
                }
            }
            printf("%d
",max-min);
        }
    }
}