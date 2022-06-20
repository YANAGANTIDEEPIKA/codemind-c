#include<stdio.h>
int main()
{
    int r,c,bsum=0;
    scanf("%d %d",&r,&c);
    int a[r][c],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            if(j==0 || i==0 || i==r-1 || j==r-1)
            {
                bsum+=a[i][j];
            }
        }
    }
    printf("%d",bsum);
}