#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,x=0,y=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='U')
        y++;
        else if(s[i]=='D')
        y--;
        else if(s[i]=='R')
        x++;
        else if(s[i]=='L')
        x--;
    }
    if(x==0 && y==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}