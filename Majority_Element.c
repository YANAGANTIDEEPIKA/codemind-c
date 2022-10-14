#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,esum=0,osum=0;
    scanf("%d",&n);
    int a[n],max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
       int c=0;
       for(j=0;j<n;j++)
       {
           if(a[i]==a[j])
           c++;
       }
       if(c-1>max && c-1>=n/2)
       max=a[i];
    }
    printf("%d",max);
}