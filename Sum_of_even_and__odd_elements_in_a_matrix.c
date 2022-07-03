#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n],i,j,rs=0,os=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i][j]%2==0)
           {
               rs+=a[i][j];
           }
           else
           {
               os+=a[i][j];
           }
        }
    }
    printf("%d %d",rs,os);
}
    