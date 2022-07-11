#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,k=0,x,len;
    char s[100],s1[10][20],temp;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            s1[k][j]=NULL;
            k++;
            j=0;
        }
        else
        {
            s1[k][j]=s[i];
            j++;
        }
    }
    s1[k][j]=NULL;
    for(i=0;i<=k;i++)
    {
        len=strlen(s1[i]);
        for(j=0,x=len-1;j<x;j++,x--)
        {
            temp=s1[i][j];
            s1[i][j]=s1[i][x];
            s1[i][x]=temp;
        }
    }
    for(i=0;i<=k;i++)
    {
        printf("%s ",s1[i]);
    }
}