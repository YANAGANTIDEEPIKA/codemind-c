#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,sum=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            sum+=s[i]-48;
        }
    }
    printf("%d",sum);
}