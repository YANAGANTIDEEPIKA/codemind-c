#include<stdio.h>
int main()
{
    int n,ld;
    scanf("%d",&n);//123
    while(n!=0)//123!=0
    {
        ld=n%10;//123%10=4
        n=n/10;//1234=1234/10=123
       printf("%d",ld);
    }
    return 0;
}