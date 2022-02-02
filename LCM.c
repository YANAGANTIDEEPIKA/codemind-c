    #include<stdio.h>
int main()
{
    int a,b,lcm,tem_num,gcd,num;
    scanf("%d %d",&a,&b);
    int num1=a,num2=b;
    while(b!=0)
    {
        tem_num=b;
        b=a%b;
        a=tem_num;
    }
    gcd=a;
    lcm=(num1*num2)/gcd;
    printf("%d",lcm);
    return 0;
}