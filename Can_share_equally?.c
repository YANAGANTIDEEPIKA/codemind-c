#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d  %d",&X,&Y);
    if (X==0 and Y%2==0)
        printf("YES");
    else if (X==0 and Y%2!=0)
        printf("NO");
    else if ((X+(2*Y))%2==0)
        printf("YES");
    else
        printf("NO");
}