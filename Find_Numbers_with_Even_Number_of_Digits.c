#include<stdio.h>
int main()
{
    int n,r,num;
    scanf("%d",&n);
    int a[n],i,me=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        int ele=0;
        num=a[i];
        while(num!=0)
        {
            r=num%10;
            ele++;
            num=num/10;
        }
        if(ele%2==0)
        {
            me++;
        }
    }
    printf("%d",me);
}