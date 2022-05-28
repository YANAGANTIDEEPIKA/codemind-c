#include<stdio.h>
int main()
{
    int m,n,r;
    scanf("%d %d",&m,&n);
    for(m;m<=n;m++)
    {
        int c=0;
        int x=m;
        while(x>0)
        {
            r=x%10;
            if(r==0)
            {
                c++;
                break;
            }
            if(m%r!=0)
            {
                c++;
            }
            x=x/10;
        }
        if(c==0)
        {
            printf("%d ",m);
        }
    }
}