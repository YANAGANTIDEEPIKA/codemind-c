 #include<stdio.h>
int main()
{
    int n,re,large=0;
    scanf("%d",&n);
    while(n>0)
    {
        re=n%10;
        if(large<re)
        {
           large=re; 
        }
        n=n/10;
    }
    printf("%d",large);
    
}