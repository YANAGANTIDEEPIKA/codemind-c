#include<stdio.h>
int main()
{
    int j,s;
    scanf("%d",&s);
    int arr[s];
    for(j=0;j<s;j++)
    {
        int i,sum=0,count=0;
        char str[100];
        scanf("%s",str);
        for(i=0;str[i]!=NULL;i++)
        {
            if(str[i]>=48 && str[i]<=57)
            {
                count++;
            }
            sum++;
        }
        if(count==sum)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}