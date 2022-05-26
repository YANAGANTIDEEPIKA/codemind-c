#include<stdio.h>
int square(int n)
{
    int i,s=0;
    for(i=1;i<n;i++)
    {
        if(n==i*i)
        {
            s=1;
            return true;
        }
    }
    if(s=0)
    return false;
}
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
   if(square(n))
   {
       printf("True");
   }
   else{
       printf("False");
   }
}