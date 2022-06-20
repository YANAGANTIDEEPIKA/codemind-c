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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j || i+j==r-1)
            {
                psum+=a[i][j];
            }
        }
    }
    printf("%d",psum);
}