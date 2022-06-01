#include<stdio.h>
int main()
{
    int n,c=0,a=0,i=0,j,r,x;
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        c++;
        n/=10;
    }
    int arr[c];
    while(x>0)
    {
        r=x%10;
        arr[i]=r;
        x=x/10;
        i++;
    } 
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                printf("Not Unique Number");
                a++;
                break;
            }
        }
        if(a>0)
        {
            break;
        }
    }
    if(a==0)
    {
        printf("Unique Number");
    }
}