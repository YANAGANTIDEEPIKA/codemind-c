 #include<stdio.h>
int main()
{
    int n,re=0,rm,ren;
    scanf("%d",&n);
    ren=n;
    while(n>0)
    {
        rm=n%10;//re=121%10=4--->4,3,2
        re=re*10+rm;
        n=n/10;//234=234/10=23,2,0
    }
    if(re==ren)
    {
        printf("True");
    }

    else{
        printf("False");
    }
    
}