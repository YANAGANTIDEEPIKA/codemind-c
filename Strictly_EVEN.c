#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)//1%2==0
        {
            if(i%2!=0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}