#include<stdio.h>
#include<math.h>
int sq(int x)
{
    int s;
    s=sqrt(x);
    return (s*s==x);
}
int fib(int n)
{
    return sq(5*n*n+4) || sq(5*n*n-4);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(fib(n)==true)
    {
        printf("True");
    }
    else
    printf("False");
}