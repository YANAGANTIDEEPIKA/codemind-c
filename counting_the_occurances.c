#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i=0,c=0,j=0;
    char str[1000],str1;
    fgets(str,sizeof(str),stdin);
   // printf("%s",str);
    scanf("%c",&str1);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]==str1)
        {
            j=1;
            c++;
        }
    }
    if(j==0)
    {
        printf("-1");
        exit(0);
    }
    printf("%d",c);
    return 0;
}