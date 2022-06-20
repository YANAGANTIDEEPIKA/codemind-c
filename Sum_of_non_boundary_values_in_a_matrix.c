#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d ",&r,&c);
    int a[r][c],i,j,psum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<r-1;i++)
    {
        for(j=1;j<c-1;j++)
        {
                psum+=a[i][j];
        }
    }
    printf("%d",psum);
}