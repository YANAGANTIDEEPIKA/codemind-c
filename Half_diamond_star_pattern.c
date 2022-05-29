#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,c;
    c=1;
    if(n<3 ||  n>100)
    printf("The pattern is not possible");
    else
    {
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=i;j++)
           {
           printf("*");
          }
       printf("
");
       }
       for(i=n-1;i>0;i--)
       {
           for(j=1;j<=i;j++)
           {
               printf("*");
           }
           printf("
");
       }
    }
    
}