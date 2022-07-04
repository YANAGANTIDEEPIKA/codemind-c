#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char s[20];
    scanf("%[^
]s",s);
    n=strlen(s);
    for(i=n-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}