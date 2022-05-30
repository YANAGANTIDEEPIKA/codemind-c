#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&m,&n);
    int a[m][n],j,sum=0;
    for(i=0; i<m; i++) 
    {
      for(j=0;j<n;j++) 
      {
         scanf("%d", &a[i][j]);
         sum+=a[i][j];
      }
    }
    printf("%d",sum);
}