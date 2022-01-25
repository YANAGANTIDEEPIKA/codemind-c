#include<stdio.h>
int main()
{
    char z,a,e,i,o,u,A,E,I,O,U;
    scanf("%c",&z);
    if(z=='a' || z=='e' || z=='i' || z=='o' || z=='u' || z=='A' || z=='E' || z=='I' || z=='O' || z=='U')
    {
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}