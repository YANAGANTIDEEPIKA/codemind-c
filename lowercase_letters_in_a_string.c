#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
            if(str[i]>='a' && str[i]<='z')
            {
            c++;
            }
    }
    printf("%d",c);
}