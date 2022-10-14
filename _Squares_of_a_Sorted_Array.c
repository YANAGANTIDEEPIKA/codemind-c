#include<stdio.h>
#include<math.h>
void sort(int *a,int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
}
int main()
{
    int n,i,j,esum=0,osum=0;
    scanf("%d",&n);
    int a[n],max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        a[j]=a[j]*a[j];
    }
    sort(a,n);
 for(j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
}