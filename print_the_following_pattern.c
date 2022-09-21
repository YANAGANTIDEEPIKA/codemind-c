#include<stdio.h>
int main()
{
    int n,i,j,k=65;
    scanf("%d",&n);
    k=k+n-1;
    for(i=n;i>=1;i--)
    {
        char c;
        for(j=1;j<=i;j++)
        {
            c=(char)k;
            printf("%c ",c);
        }
        printf("
");
        k--;
    }
}