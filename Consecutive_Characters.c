#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,c=0,c1=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
        else
        {
            if(c1<c)
            {
                c1=c;
            }
            c=0;
        }
    }
    if(c1<c)
    {
        c1=c;
    }
    printf("%d",c1+1);
}