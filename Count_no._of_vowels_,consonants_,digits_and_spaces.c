#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[100];
    int i,v,c,d,sp;
    v=c=d=sp=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U')
        {
            v++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            d++;
        }
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            c++;
        }
        else if(s[i]==' ')
        {
            sp++;
        }
    }
printf("Vowels: %d
",v);
printf("Consonants: %d
",c);
printf("Digits: %d
",d);
printf("White spaces: %d
",sp);
}
 