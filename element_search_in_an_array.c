#include<stdio.h>
int main()
{
    int n,se,flag=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(a[i]==se)
        {
            flag=1;
            printf("True");
        break;
        }
    }
    if(flag==0)
    printf("False");
}