#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,esum=0,osum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            esum+=a[i];
        }
        else
        {
            osum+=a[i];
        }
    }
    if(abs(esum-osum)%4==0)
    printf("X");
    else
    printf("Y");
}