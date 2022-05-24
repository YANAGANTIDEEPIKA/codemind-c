#include<stdio.h>
int main()
{
   int n,i;
   float sum;
   scanf("%d",&n);
   sum=0.0f;
   for(i=1;i<=n;i++)
   {
       sum=sum+((float)1/(float)i);
   }
   printf("%.2f",sum);
}