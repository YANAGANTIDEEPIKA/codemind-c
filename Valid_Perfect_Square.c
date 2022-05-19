#include<stdio.h>
bool pernum(int n)
{
    int j;
    for(j=1;j<n;j++)
        {
            if(n==j*j)
            return true;
    }
    return false;
}
int main()
{
    int t,n,i,j;
    scanf("%d
",&t);
    for(i=1;i<=t;i++){
        scanf("%d
",&n);
        if(pernum(n))
        printf("True");
        else
        printf("False");
        printf("
");
    }
}