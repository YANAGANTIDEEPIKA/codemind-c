#include<stdio.h>
#include<math.h>
// void pow(int X,int Y,int M){
//     int g;
//     g=pow(X,Y)%M;
//     printf("%d",g);
//}
int main()
{
    int X,Y,M;
    long power;
    scanf("%d %d %d",&X,&Y,&M);
    if(1<=X<=20 && 1<=Y<=100 && 2<=M<=100){
        power=pow(X,Y);
        power=power%M;
        printf("%ld",power);
    }
}