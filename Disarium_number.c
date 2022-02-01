#include<stdio.h>
#include<math.h>
int main()
{
    int n,ln=0;
    scanf("%d",&n);
     int n1=n;
    while(n>0)
    {
        ln=ln+1;
        n=n/10;
}
   n=n1;
    int sum=0;
    while(n>0)
    {
        int rm=n%10;
        sum+=pow(rm,ln);
        n=n/10;
        ln--;
    }
    
    if(sum==n1)
    
        printf("True");
    
    
    else
        printf("False");
    
  }



