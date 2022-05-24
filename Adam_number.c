#include<stdio.h>
int rev(int n)
{
    int r,t,re=0;
    t=n;
    while(t!=0)
    {
     r=t%10;
     re=re*10+r;
     t=t/10;
    }
    return re;
}
int main()
{
    int n,s1,s2,p;
    scanf("%d",&n);
    s1=n*n;
    p=rev(n);
    s2=p*p;
    if(s1==rev(s2))
    {
        printf("True");
    }
    else{
        printf("False");
    }
}