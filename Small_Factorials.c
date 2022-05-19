#include<stdio.h>
int main()
{
    int T,N,i,j,p=1;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        p=1;
        for(j=N;j>=1;j--)
        {
            p=p*j;
        }
        printf("%d",p);
        printf("
");
    }
}