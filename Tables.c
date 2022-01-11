#include<stdio.h>
int main()
{
    int num,a,i;
    scanf("%d%d",&num,&a);
    for(i=1;i<=a;i=i+2)
    {
        
        printf("%d x %d = %d
",num,i,num * i);
       
    }
    return 0;
}