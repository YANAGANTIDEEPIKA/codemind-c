#include<stdio.h>
int main()
{
    int i,s=0,x;
    char str[1000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            x=str[i]-48;
            s+=x;
        }
    }
    printf("%d",s);
}